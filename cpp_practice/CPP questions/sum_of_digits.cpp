#include<iostream>
using namespace std;
int sum_of_digits(int n)
{
    //base case
    if(n==0)
    {
        return 0;
    }
    return (n%10+sum_of_digits(n/10));   
}
int main(){
    int n;
    cout<<"Enter number to add its digits:";
    cin>>n;
    cout<<endl;
    sum_of_digits(n);
    cout<<"sum of digits:"<<sum_of_digits(n);
}