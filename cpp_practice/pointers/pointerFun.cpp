#include<iostream>
using namespace std;
void update(int *p,int i){
    *p=8;
    i++;
   // p++;
}
int main(){
    int i=9;
    int *p=&i;
    cout<<"before:"<<i<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    update(p,i);
    cout<<"after:"<<i<<endl;
    cout<<*p<<endl;
    cout<<i<<endl;
    cout<<p<<endl;

}