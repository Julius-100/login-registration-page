// menu
// login
// registration
// forgot password
// exit
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void login();
void registration();
void forgot();

int main(){

    int c;
    cout<<"\t\t\t__________________________________________\n\n\n";
    cout<<"\t\t\t          Welcome to the Login Page       \n\n\n";
    cout<<"\t\t\t_________________MENU_____________________\n\n\n";
    cout << "                                                  \n\n";
    cout << "\t\t\t| Press 1 to LOGIN                        |" << endl;
    cout << "\t\t\t| Press 2 to REGISTER                     |" << endl;
    cout << "\t\t\t| Press 3 if you forgot your PASSWORD     |" << endl;
    cout << "\t\t\t| Press 4 to EXIT                         |" << endl;
    
    cout << "\n\t\t\t Please enter your choice : ";
    cin >> c;
    cout << endl;

    switch(c)
    {
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forgot();
            break;
        case 4:
            cout << "\t\t\t Thank you! \n\n";
            break;
        default:
            system("cls");
            cout << "\t\t\t Please select from the options given above \n" << endl;
            main();
    }

}

void login(){
    int count;
    string userid, password, id, pass;
    system("cls");
    cout << "\t\t\t Please enter the username and password : " << endl;
    cout << "\t\t\t USERNAME : ";
    cin >> userid;
    cout <<"\t\t\t PASSWORD : ";
    cin >> password;

    ifstream input("records.txt");
    while(input >> id >> pass)
    {
        if(id == userid && pass == password)
        {
            count = 1;
            system("cls");
        }
    }
    input.close();

    if(count == 1)
    {
        cout << userid << "\n Your LOGIN is successful \n Thanks for logging in! \n";
        main();
    }
    else
    {
        cout << "\n LOGIN ERROR \n Please check your username and password \n";
        main();
    }
}


void registration(){
    
    string ruserid, rpassword, rid, rpass;
    system("cls");
    cout << "\t\t\t Enter the username : ";
    cin >> ruserid;
    cout << "\t\t\t Enter the password : ";
    cin >> rpassword;

    ofstream f1("records.txt", ios::app);
    f1 << ruserid << ' ' << rpassword << endl;
    system("cls");
    cout << "\n\t\t\t Registration is successful! \n";
    main();
}

void forgot(){
    int option;
    system("cls");
    cout << "\t\t\t You forgot the password? No worries \n";
    cout << "\t\t\t Press 1 to reset your id by username "<<endl;
    cout << "\t\t\t Press 2 to go back to the main menu "<<endl;
    cout << "\t\t\t Please enter your choice : ";
    cin >> option;
    switch(option)
    {
        case 1:
        {
            int count = 0;
            string suserid, sid, spass;
            cout << "\n\t\t\t Enter the username which you remembered : ";
            cin >> suserid;

            ifstream f2("records.txt");
            while(f2 >> sid >> spass)
            {
                if(sid == suserid)
                {
                    count = 1;
                }
            }
            f2.close();
            if(count == 1)
            {
                cout << "\n\t\t\t Your account is found! \n";
                cout << "\t\t\t Your password is : " << spass;
                main();
            }
            else
            {
                cout << "\n\t\t\t Sorry! Your account is not found! \n";
                main();
            }
            break;
        }
        case 2:
        {
            main();
        }
        default:
            cout << "\t\t\t Wrong choice! Please try again \n";
            forgot();
    }
}
