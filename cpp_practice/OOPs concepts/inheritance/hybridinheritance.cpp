#include<iostream>
using namespace std;
//this is an example of hybrid inheritance
class friends{
    public:
    int totalFriendsCount=50;
    void totalFriends(){
        int n;
        cout<<"enter total friends:"<<endl;
        cin>>n;
        cout<<"total friends are:"<<n<<endl;
    }

};
class family{
    public:
    int fatherFamilyMembers=23;
    int motherFamilyMembers=20;
    void totalFamily(){
        int i;
        cout<<"enter total family members:"<<endl;
        cin>>i;
        cout<<"total family members are:"<<i<<endl;
    }

};
//use of multiple inheritance
class tt:public friends,public family{

};
class schoolFriends:public friends{
    public:
    void schoolFriendsCount(){
        cout<<"school friends are:"<<totalFriendsCount<<endl;
    }

};
//use of hierarchical inheritance
class fatherFamily:public family{
    public:
    void fatherFamilyMembersCount(){
        cout<<"father family members are:"<<fatherFamilyMembers<<endl;
    }


};
class motherFamily:public family{
    public:
    void motherFamilyMembersCount(){
        cout<<"mother family members are:"<<motherFamilyMembers<<endl;
    }

};
int main(){
    tt obj;
    obj.totalFriends();
    obj.totalFamily();
    schoolFriends obj1;
    obj1.schoolFriendsCount();
    fatherFamily obj2;
    obj2.fatherFamilyMembersCount();
    motherFamily obj3;
    obj3.motherFamilyMembersCount();
    return 0;
    
}