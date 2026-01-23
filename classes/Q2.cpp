#include<iostream>
using namespace std;

class BankAccount{
    private:
    int accountNumber;
    int balance;
    public:
    BankAccount(int num,int bal){
        accountNumber = num;
        balance = bal;
    }
    void deposite(int money){
        balance += money;
        cout<<"Money Successfully deposited\nCurrent balance: "<<balance<<endl;
    }
    void withdraw(int money){
        balance -= money;
        cout<<"money Successfully withawed \nRemaining bal "<<balance<<endl;
    }
    void getBalance(){
        cout<<"Balance: "<<balance<<endl;
    }

};
int main(){
    BankAccount a1(101,5000);
    a1.getBalance();
    a1.deposite(500);
    a1.withdraw(800);
    a1.getBalance();

}