#include<iostream>
#include<string>
using namespace std;
class Account
{
    public:
    string name;
    double balance;
    void deposit(double amount){balance += amount;cout<<"account balance is:"<<balance<<endl;}
    void withdraw(double amount){balance =balance-amount;cout<<"account balance is:"<<balance;}
    
};
int main(){
    Account thanoj_account;
    thanoj_account.name="THANOJ REDDY";
    thanoj_account.balance=4000.0;

    thanoj_account.deposit(1000.0);
    thanoj_account.withdraw(2000.0);
    
}