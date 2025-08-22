#include<iostream>
using namespace std;
int ap(int a){
    int ans;
    ans=3*a+73;
    return ans;
}
int main(){
    int n;
    cout<<"Enter the nth term value:";
    cin>>n;
    cout<<"Answer is:"<<ap(n);
}