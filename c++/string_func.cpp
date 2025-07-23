#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="consistency over perfection";
    string :: iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        cout<<*it<<endl;
    }
    // Using reverse iterator
    for(auto it=str.rbegin();it!=str.rend();it++)
    {
        cout<<*it;
    }
    //size of string
    cout<<endl<<"Size of string is: "<<str.size()<<endl;
    //capacity of string
    cout<<"Capacity of string is: "<<str.capacity()<<endl;
    //adding characters to string
    str+= " is the key to success";
    cout<<str<<endl;

    return 0;
}