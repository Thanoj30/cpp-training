#include<iostream>
using namespace std;
class human{
    public:
    int weight;
    int height;
    int age;
    public:
    int getage(){
        return this->age;
    }
    void setweight(int weight){
        this->weight=weight;
    }
};
class male:public human{
    public:
    string color;
    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};
int main(){
    male object1;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.age<<endl;

    cout<<object1.color<<endl;
    object1.setweight(44);
    cout<<object1.weight<<endl;
    object1.sleep();
    return 0;
}