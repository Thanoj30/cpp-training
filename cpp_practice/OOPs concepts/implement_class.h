
#include<string>
class Account
{
    private:
    std::string name={"thanoj"};
    double balance;
    public:
    void set_balance(double amount){
        balance=amount;
    }
    int get_balance(){
        return balance;
    }
    void deposit(double amount);
    void withdraw(double amount);
};