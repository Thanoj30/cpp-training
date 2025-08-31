#include<iostream>
using namespace std;
class hero{
    //properties
   public:
    int health;
   
    char level;
    //simple constructor
    hero(){
        cout<<"hiii i am constructor"<<endl;
    }
    //parameterized constructor
    hero(int health){
        this->health=health;
    }
    hero(int health,char level){
        this->health=health;
        this->level=level;
    }
    //copy constructor
    hero(hero&temp){
        cout<<"this is copy constructor"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }
    int getlevel(){
        return level;
    }
    void setlevel(char ch){
        level =ch;
    }
    void print(){
        cout<<"health is:"<<this->health<<endl;
        cout<<"level is:"<<this->level<<endl;
    }
    //destructor
    ~hero(){
        cout<<"hii i am destructor"<<endl;
    }
};
int main(){
    //static allocation
    hero a;
    //dynamic allocation
    hero *b=new hero;
    delete b; 


    // hero s(70,'A');
    // s.print();
    // hero r(s);
    // r.print();


    // hero varun;
    // hero kiran(88);
    // hero rahul(99,'A');
    // cout<<varun.health<<endl;
    // cout<<kiran.health<<endl;
    // cout<<rahul.health<<" "<<rahul.level<<endl;



   /* hero a;
    a.sethealth(40);
    a.level='b';
    cout<<"level is:"<<a.level<<endl;
    cout<<"health is:"<<a.gethealth()<<endl;
    hero *b=new hero;
    (*b).sethealth(70);
    b->level='t';
    cout<<"level is:"<<b->level<<endl;
    cout<<"health is:"<<(*b).gethealth()<<endl;
*/


    // hero ramesh;
    // ramesh.sethealth(70);
    // ramesh.level='A';
    // cout<<"health is:"<<ramesh.gethealth()<<endl;
    // cout<<"level is:"<<ramesh.level<<endl;
   // cout<<sizeof(ramesh)<<endl;

}