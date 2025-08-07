#include<iostream>
using namespace std;
int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=i*ans;
    }
    return ans;
}
int nCr(int n,int r){
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    return num/denom;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"answer is:"<<nCr(n,r);
    return 0;
}