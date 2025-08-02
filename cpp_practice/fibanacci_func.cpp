#include<iostream>
using namespace std;
void fib(int a);
void fib(int a){
    int x=0;
    int y=1;
    int z;
    for(int i=0;i<a;i++)
    {
        cout<<x<<" ";
        z=x+y;
        x=y;
        y=z;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter a number to get Fibonacci series: ";
    cin>>n;
    cout<<"Fibanacci series up to "<<n<<" terms is: ";
    fib(n);
    cout<<endl;
}
