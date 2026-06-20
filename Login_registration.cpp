#include <iostream>
#include <fstream>

using namespace std;


void registerUser()
{
    string username;
    string password;


    cout << "\n===== Registration =====\n";


    cout << "Enter username: ";
    cin >> username;


    cout << "Enter password: ";
    cin >> password;



    ofstream file("users.txt", ios::app);


    file << username << " "
         << password << endl;


    file.close();


    cout << "Registration Successful!\n";

}




bool loginUser()
{

    string username;
    string password;


    cout << "\n===== Login =====\n";


    cout << "Enter username: ";
    cin >> username;


    cout << "Enter password: ";
    cin >> password;



    ifstream file("users.txt");


    string savedUser;
    string savedPass;



    while(file >> savedUser >> savedPass)
    {

        if(username == savedUser &&
           password == savedPass)
        {
            return true;
        }

    }


    return false;

}



int main()
{

    int choice;


    cout<<"1. Register\n";
    cout<<"2. Login\n";


    cout<<"Enter choice: ";
    cin>>choice;



    if(choice == 1)
    {
        registerUser();
    }


    else if(choice == 2)
    {

        if(loginUser())
        {
            cout<<"Login Successful!\n";
        }

        else
        {
            cout<<"Invalid Username or Password\n";
        }

    }


    else
    {
        cout<<"Invalid Choice";
    }



    return 0;

}
