#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;
    void bark(){
    cout<<"barking"<<endl;
    }
};
class human{
    public:
    string color;
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class hybrid :public animal,public human{

};
int main(){
    hybrid obj1;
    obj1.bark();
    obj1.speak();
    return 0;

}