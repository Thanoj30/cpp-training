#include<iostream>
using namespace std;
int money_double(int x)
{
    if(x==1)
    {
        return 1;
    }
    return (2*(money_double(x-1)));
}
int main(){
    int total_money=0;
    int n;
    cout<<"enter no.of days:";
    cin>>n;
    total_money=money_double(n);
    cout<<"total money is:"<<total_money;
}