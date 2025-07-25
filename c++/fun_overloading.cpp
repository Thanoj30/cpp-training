#include<iostream>
#include<string>
using namespace std;
//
void display(int);
void display(string);
int main(){
    display(9);
    display("hello");
    return 0;
}
void display(int a)
{
    cout<<"printing integer value:"<<a<<endl;
}
void display(string str)
{
    cout<<"printing string value:"<<str<<endl;
}
//
void add(int,int);
void add(int,int,int);
int main()
{
    add(2,3);
    add(2,3,4);
    return 0;
}
void add(int a, int b){
    cout<<a+b<<endl;
}
void add(int a,int b,int c){
    cout<<a+b+c<<endl;
}
//

void add(int,int);
void add(int,int,int);
void add(int,double);
void add(double,int);
int main()
{
    add(2,3);
    add(2,3,4);
    add(4,4.7);
    add(4.3,2);
    return 0;
}
void add(int a, int b){
    cout<<a+b<<endl;
}
void add(int a,int b,int c){
    cout<<a+b+c<<endl;
}
void add(int a,double b){
    cout<<a+b<<endl;
}
void add(double a,int b){
    cout<<a+b<<endl;
}

