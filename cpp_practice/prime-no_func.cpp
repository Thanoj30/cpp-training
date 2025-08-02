#include<iostream>
using namespace std;
bool isprime(int a)
{
    for(int i=2;i<(a/2);i++)
    {
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cout<<"enter a and b:";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isprime(i)==true){
            cout<<i<<endl;
        }
    }
    return 0;
}