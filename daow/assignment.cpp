#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
int Menu();
void AddBook(string FN );
void DisplayBook(string FN);
void BorrowBook(string FN);
void SearchBook(string FN);
void DeleteBook(string FN);
string CalGrade(int &Score ,string &Grade);

int main(){
    const string Filename = "Book.dat";
    ifstream InFile;
    ofstream OutFile;
    int c;
    do{
        system("cls");
    // call external command 
    c = Menu();
    if (c ==1){
        AddBook(Filename);
    }else if (c == 2){
        DisplayBook(Filename);
    }else if (c==3){BorrowBook(Filename);

    }else cout<<"exit program";return 0;
    } while(c != 0);
    cout << "Exit program."<< endl;
    return(0);
    }
    int Menu(){
        string line(25,'=');
        int Choose;
        cout << "Program Borrow Book \n";
        cout << line << endl;
        cout << ":      Main Menu       :\n";
        cout << line << endl;
        cout << ":  0 -Exit             :\n";
        cout << ":  1 -Add Book         :\n";
        cout << ":  2 -Display Book     :\n";
        cout << ":  3 -Borrow Book      :\n";
        cout << ":  4 -Returned Book    :\n";
        cout << ":  5 -Delete Book      :\n";
        cout << line << endl;
        cout << " Enter choose : ";
        cin >> Choose;
        
        return(Choose);
        
        }void AddBook(string FN ){// open file for write and append
        ofstream OutFile(FN.c_str(), ios_base::out | ios_base::app);
        string line(50,'='),Id,Name;
            int n = 0,Status;
        if(OutFile.is_open()){
       
        cout << "\n Add Book \n";
        cout << "Enter id : ";
        cin >> Id;
        cout << "Enter name : ";
        cin >> Name;// write data to file Book.dat
       Status = 1;
       
    
        OutFile << Id << " "<< Name << " "<< Status << endl;

        OutFile.close();
        char Wait(ENETRESET);
        cin.get(Wait);
        cout << "\nSaved already ,Press any botton to continue";
        cin.get(Wait);
}else cout << "File could not opened."<< endl;
        
        }void DisplayBook(string FN){ifstream InFile(FN.c_str(),ios_base::in);
        // open file for read
        string line(50,'='),Id,Name;
            int n = 0,Status;
        if(InFile.is_open()){
            
            cout << left << setw(8)<<"\nList Book\n";
            cout << left << setw(8)<< line << endl;
            cout << left << setw(8)<<":  No. :    Id :        Name        :   Status   :\n";
            cout << left << setw(8)<<line << endl;// read data from file Book.dat
            InFile >> Id >> Name>>Status;
            while(!InFile.eof()) {
                n = n + 1;
                 cout <<": "<< right << setw(4) << n << " : ";
                 cout << right << setw(5) << Id<< " : ";
                 cout <<right<<setw(18)<< Name << " : ";
                 if (Status == 1){
 cout <<right<<setw(6)<< "Still have" << " : "<<endl;
                 } else if(Status == 0) cout << right<<setw(6)<< "Borowed" << " : "<<endl;
                 else cout <<"Error";
                 
                //    cout << "\x1b[1A";
     // cout << "    "<< setfill(' ') << setw(0) << "    ";
                 InFile >> Id >> Name>>Status;
                 }InFile.close();
                 cout << left << setw(8)<< line << endl;
                 char Wait;
                 cin.get(Wait);
                 cout << "\nPress any botton to continue";
                 cin.get(Wait);
                 }else cout << "File could not opened."<< endl;
        
       
                  }void BorrowBook(string FN){ifstream InFile(FN.c_str(), ios_base::in | ios_base::out);
        // open file for read
        string line(50,'='),Id,Name;
            int n = 0,Status;
        if(InFile.is_open()){
            cout << left << setw(8)<<"\nList Book\n";
            cout << left << setw(8)<< line << endl;
            cout << left << setw(8)<<":  No. :    Id :        Name        :   Status   :\n";
            cout << left << setw(8)<<line << endl;// read data from file Book.dat
            InFile >> Id >> Name>>Status;
            while(!InFile.eof()) {
                n = n + 1;
                 cout <<": "<< right << setw(4) << n << " : ";
                 cout << right << setw(5) << Id<< " : ";
                 cout <<right<<setw(18)<< Name << " : ";
                 if (Status == 1){
 cout <<right<<setw(6)<< "Still have" << " : "<<endl;
                 } else if(Status == 0) cout << right<<setw(6)<< "Borowed" << " : "<<endl;
                 else cout <<"Error";
                                                                                        
                 InFile >> Id >> Name>>Status;
                 }InFile.close();
                 cout << left << setw(8)<< line << endl;
                 char Wait;
                 cin.get(Wait);
                 cout << "\nPress any botton to continue";
                 cin.get(Wait);
                 }else cout << "File could not opened."<< endl;

                 }
                 
               