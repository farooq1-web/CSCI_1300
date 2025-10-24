//Object definition is a class
//Definition provides name, data, and methods that are included
//doesnt' say what the object can do, only how it looks




//Each object has its own data, and functions that act on that data (functions are called methods)

//object definition is called a class

/*
class name
{
    private:
        //code here
    public:
        //code here
}

*/

// public - methods and data that can be acessed when an instance of the class is created
// private - data and methods that can only be acessed inside the class


//Instance of a class, a variable is an instance of the class
//the variable is an object of type (Class)

/*Encapsulation
The public interface defines how the object can be used
deatils of implementation are hidden
private data is hidden, must be acessed through the public interface
can make changes to the class without affecting the public interface


class CashRegister{
    private:
        int itemCount;
        double price;
        public
        int GetItemCount() const;

}
int main()
{
    CashRegister cr
    cout<<cr.itemCount; // this code won't work as itemcount is private, it cannote be acessed directly outside of class

    cout<<cr.getItemCount; //the public method can be called and return the private variable itemCount
}

Private is there to: 
control acess to private data members
prevent values being changed incorrectly
public interface can stay the same and implementation can still change

//class methods are member functions
(member functions or class methods) define the public interface
get private object data called "getters" or "acessors", does not modify the object that is is called on
modify private object data. called "setters" or "mutators", changes the object data that is is called on
*/

//CREATE A BANK ACCOUNT CLASS. (name, account number, account type, balance, deposit, withdraw, getBalance)
#include <iostream>
using namespace std;

//define bankAccount class

class BankAccount
{
private:
    //private data members can only be accessed through public methods
    string ownerName;       
    int accountNumber;
    double balance;
public:
    //deposit - add money to balance
    void deposit(double depositAmount);
    //withdrawl - subtract money from account
    void withdraw(double amount);
    //getBalance - return value of balance
    double getBalance() const;
    //setupaccount - intialize private variables
    void setUpAccount(string ownerName, int accountNumber, double balance);
    //displayAccount - display account information
    void displayAccountInfo();
};


//bank account implementation
void BankAccount::deposit(double depositAmount)
{
    //update balance
    //balance is a member of bankAccount, deposit method can acess it directly
    balance += depositAmount; //add depositAmount to current balance
}
void BankAccount::withdraw(double amount)
{
    //check that balance is >= amount, if so balance -=amount, else insufficient funds
    if(balance>=amount)
    {
        balance-=amount;
    }
    else
    {
        cout<<"Insufficient Funds";
    }
}
//public method to acess private data member
double BankAccount::getBalance() const{
    return balance;
}

void BankAccount::setUpAccount(string owner, int accountNum, double initBalance)
{
    //initialize private variables
    ownerName = owner;
    accountNumber = accountNum;
    balance = initBalance;
}
//add a public method to the class to display account information
void BankAccount::displayAccountInfo()
{
    cout<<"Name: "<<ownerName<<endl;
    cout<<"Account Num: "<<accountNumber<<endl;
    cout<<"Balance: "<<balance<<endl;
}

int main()
{
    //Create instance of BankAccount
    BankAccount ba;
    //. notation gives us the public interface to the class
    //none of the private variables will be shown in the list
    ba.setUpAccount("Bob", 1234, 500000);
    cout<<ba.getBalance()<<endl;

    ba.displayAccountInfo();

    ba.withdraw(250000);
    cout<<ba.getBalance()<<endl;
    
    ba.deposit(200000);
    cout<<ba.getBalance()<<endl;
    return 0;
}
