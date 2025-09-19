#include<iostream>
using namespace std;

int factorial(int num)
{
    if(num==1)
    {
        return 1;
    }
    return num*factorial(num-1);
}
int main()
{
    cout<<factorial(5);
    return 0;
}
//fibanocci series
/*unsigned long long fib(unsigned long long int n)
{
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    cout<<fib(4);
    return 0;
}*/
