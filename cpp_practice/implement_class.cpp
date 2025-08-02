#include<iostream>
#include<string>
#include "implement_class.h"

void Account::deposit(double amount){
    balance+=amount;
}
void Account::withdraw(double amount){
    balance-=amount;
}
int main(){
    Account account1;
    account1.set_balance(1000);
    std::cout<<account1.get_balance();
    std::cout<<",";
    account1.deposit(1000);
    std::cout<<account1.get_balance();
    return 0;
}