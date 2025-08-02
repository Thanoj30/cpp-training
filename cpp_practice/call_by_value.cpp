#include<iostream>
using namespace std;
void modifyNum(int);
int main(){
    int a=7;
    cout<<"Before function call, a = "<<a<<endl;
    modifyNum(a);
    cout<<"After function call, a = "<<a<<endl;
}
void modifyNum(int n)
{
    n=44;
    cout<<"Inside function, n = "<<n<<endl;
    // Note: This change does not affect the original variable 'a' in main
}