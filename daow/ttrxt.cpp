#include <iostream>
#include <string>
#include<fstream>
#include<iomanip>

using namespace std;
const int maxrow = 50;
string BName[maxrow] = {};
string BId[maxrow] = {};
string line(50,'=');
void AddBook()
{
    char Name[50];
    char BNo[5];
    int BStatus = 1;
    cin.ignore();
    cout <<"Book Id ";
    cin.getline(BNo,5);
    cout <<"Book Name ";
    cin.getline(Name,5);
    for (int i = 0; i<maxrow;i++)
    {
        if(BId[i] == "\0");
        {
            BId[i] = BNo;
            BName[i] = Name;
            break;
        }
    }
}
void DisplayBook() //still bug
{
    system("CLS");
    cout<<"Current Book"<<endl;
    cout<<line<<endl;
    int Counter = 0;
    cin.ignore();
    cout << "No.   | ID   | NAME   "<<endl;
    cout<<line<<endl;
    for (int i = 0;i<maxrow;i++)
    {
        if (BId[i] != "\0")
        {
            Counter++;
            cout<<"   "<<Counter<<"   "<<BId[i]<<"   "<<BName[i]<<"   "<<endl;
            

        }
        if (Counter == 0)
        {
            cout<<"No Book Found"<<endl;
        }
    }
                char Wait;
                 cout << "\nPress any botton to continue";
                 cin.get(Wait);
                 cout<<line<<endl;

}
int main (){
    std::cout<<"MENU\n";
    int Choose;
    system("CLS");
    do{
        int Choose;
        cout << "Program Borrow Book \n";
        cout << line << endl;
        cout << ":      Main Menu       :\n";
        cout << line << endl;
        cout << ":  0 -Exit             :\n";
        cout << ":  1 -Add Book         :\n";
        cout << ":  2 -Display Book     :\n";
        cout << ":  3 -Borrow Book      :\n";
        cout << ":  4 -Return Book      :\n";
        cout << ":  5 -Delete Book      :\n";
        cout << line << endl;
        cout << " Enter choose : ";
        cin >> Choose;
        switch (Choose)
        {
            case 0: cout<<"End the program";
            return (0);
            break;
            case 1: AddBook();
            system("CLS");
            break;
            case 2: DisplayBook();
            break;
        }

    } while (Choose != 4);
}
