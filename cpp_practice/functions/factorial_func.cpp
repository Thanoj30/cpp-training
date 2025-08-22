#include<iostream>
using namespace std;
int fact(int);
int fact(int a){
    int factorial=1;
    if(a==0||a==1)
    return 1;
    for(int i=1;i<=a;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int n;
    cout<<"Enter a number to find out its factorial: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is:"<<fact(n);
    return 0;
}