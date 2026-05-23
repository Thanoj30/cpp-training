#include<iostream>
using namespace std;
class a{
    public:
    int x=10;
    void display(){
        cout<<"i am in class a";
    }
};
class b: public a{
    public:
    int y=20;
    void display(){
        cout<<"i am in class b";
    }
    void sum(int a,int b){
        int s=a+b;
        cout<<"the sum is "<<s<<endl;
        return;
    }
    void sum(int a,int b,int c){
        int s=a+b+c;
        cout<<"the sum is "<<s<<endl;
        return;
    }
};
int main(){
    a obj1;
    b obj2;
    cout<<obj1.x<<endl;
    cout<<obj2.x<<endl;
    obj2.sum(10,20);
    obj2.sum(1,2,3);
    
}