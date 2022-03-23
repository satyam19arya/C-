#include <bits/stdc++.h>
using namespace std;

#define MIN_BALANCE 500

class Account{
    private:
    long accountNumber;
    string firstName;
    string lastName;
    float balance;
    static long nextAccountNumber;

    public:
    Account(){};
    Account(long accountNumber,string fName,string lName,float balance);
    long getAccountNumber();
    string getFirstName();
    string getLastName();
    float getBalance();

    void Deposit(float amount);
    void Withdraw(float amount);
    friend Bank;
};
long Account::nextAccountNumber=0;

//No inheritance cannot be used. A back is not an account in itself.
//Its a has a relationship between bank and account.
//Whenever an instance of one class is used in another class, it is called HAS-A relationship.
class Bank{
    private:
    public:
    Bank();
    Account openAccount(string fName,string lName,float balance);
    Account BalanceEnquiry(long accountNumber);
    Account Deposit(long accountNumber,float amount);
    Account Withdraw(long accountNumber,float amount);
    Account CloseAccount(long accountNumber);
    Account ShowAllAccounts();
    ~Bank();
};

int main(){
    Bank b;
    Account acc;
    int choice;
    string fname,lname;
    float balance,amount;
    long accountNumber;
    cout<<" Welcome to HDFC bank "<<endl;
    do{
        cout<<"Select the one option given below: \n";
        cout<<"1: Open an account\n";
        cout<<"2: Balance Enquiry\n";
        cout<<"3: Deposit\n";
        cout<<"4: Withdraw\n";
        cout<<"5: Closed an Account\n";
        cout<<"6: Show all Account\n";
        cout<<"7: Quit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter first name: ";
            cin>>fname;
            cout<<"Enter last name: ";
            cin>>lname;
            cout<<"Enter initial balance: ";
            cin>>balance;
            acc=b.openAccount(fname,lname,balance);
            cout<<"\nCongratulations! Account is created\n"<<endl;
            cout<<acc;
            break;

            case 2:
            cout<<"Enter account number: \n";
            cin>>accountNumber;
            acc=b.BalanceEnquiry(accountNumber);
            cout<<"Your account details\n"<<endl;
            cout<<acc;
            break;

            case 3:
            cout<<"Enter account number: \n";
            cin>>accountNumber; 
            cout<<"Enter amount\n";
            cin>>amount;
            acc=b.Deposit(accountNumber,amount);
            cout<<"Amount is deposited\n";
            cout<<acc;
            break;

            case 4:
            cout<<"Enter account number: \n";
            cin>>accountNumber;
            cout<<"Enter amount\n";
            cin>>amount;
            acc=b.Withdraw(accountNumber,amount);
            cout<<"Amount Withdraw\n"<<endl;
            cout<<acc;
            break;

            case 5:
            cout<<"Enter account number: ";
            cin>>accountNumber;
            acc=b.CloseAccount(accountNumber);
            cout<<"\nAccount closed\n";
            cout<<acc;
            break;     

            case 6:
            b.ShowAllAccounts();
            break;

            case 7:
            break; 

            default:
            cout<<"\nEnter valid number!";
            exit(0);              
        } 
    }while(choice!=7);

    return 0;
}