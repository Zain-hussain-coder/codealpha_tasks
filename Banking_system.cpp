#include <iostream>
#include <vector>

using namespace std;


class Transaction
{

public:

    string type;
    float amount;


    Transaction(string t,float a)
    {
        type=t;
        amount=a;
    }

};



class Account
{

private:

    string name;

    int accountNumber;

    float balance;


    vector<Transaction> history;



public:


    void createAccount()
    {

        cout<<"===== Create Account =====\n";


        cout<<"Enter Name: ";
        cin>>name;


        cout<<"Enter Account Number: ";
        cin>>accountNumber;


        cout<<"Enter Initial Balance: ";
        cin>>balance;



        cout<<"Account Created Successfully\n";

    }



    void deposit(float amount)
    {

        balance += amount;


        history.push_back(
        Transaction("Deposit",amount));


        cout<<"Amount Deposited\n";

    }



    void withdraw(float amount)
    {


        if(amount <= balance)
        {

            balance -= amount;


            history.push_back(
            Transaction("Withdraw",amount));


            cout<<"Withdrawal Successful\n";

        }

        else
        {
            cout<<"Insufficient Balance\n";
        }

    }




    void displayAccount()
    {

        cout<<"\n===== Account Details =====\n";


        cout<<"Name: "
            <<name<<endl;


        cout<<"Account Number: "
            <<accountNumber<<endl;


        cout<<"Balance: "
            <<balance<<endl;


    }



    void showTransactions()
    {


        cout<<"\n===== Transaction History =====\n";


        for(auto t : history)
        {

            cout<<t.type
                <<" : "
                <<t.amount
                <<endl;

        }

    }



};





int main()
{

    Account acc;


    acc.createAccount();


    int choice;

    float amount;



    do
    {


        cout<<"\n\n1. Deposit";

        cout<<"\n2. Withdraw";

        cout<<"\n3. Account Details";

        cout<<"\n4. Transaction History";

        cout<<"\n5. Exit";


        cout<<"\nEnter Choice: ";

        cin>>choice;



        switch(choice)
        {


        case 1:

            cout<<"Enter amount: ";

            cin>>amount;

            acc.deposit(amount);

            break;



        case 2:

            cout<<"Enter amount: ";

            cin>>amount;

            acc.withdraw(amount);

            break;



        case 3:

            acc.displayAccount();

            break;



        case 4:

            acc.showTransactions();

            break;



        case 5:

            cout<<"Thank you";

            break;



        default:

            cout<<"Invalid Choice";

        }


    }while(choice != 5);



    return 0;

}
