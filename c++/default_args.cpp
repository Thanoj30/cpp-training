#include<iostream>
#include<string>
using namespace std;
void greet(string name,string prefix="Mr.",string suffix="How are you..?");
void greet(string name,string prefix,string suffix)
{
    cout<<"Hi "<<prefix+" "+name+" "+suffix<<endl;
}
int main(){
    greet("Rahul");
    greet("Sai");
    greet("Anjali","Ms.","Have a nice day!");
    return 0;
}
