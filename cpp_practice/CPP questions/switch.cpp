#include<iostream>
using namespace std;
int main(){
    int hun,fif,twen,total_count;
    cout<<"Enter amount:";
    cin>>total_count;
   int n;
   cout<<"enter note type:";
   cin>>n;
    switch(n){
        case 1:
         hun=total_count/100;
        cout<<hun;
        total_count=total_count%100;
        break;
        case 2:
         fif=total_count/50;
        cout<<fif;
        total_count=total_count%50;
        break;
        case 3:
         twen=total_count/20;
        cout<<twen;
        total_count=total_count%20;
        break;
        default:
        cout<<"Enter proper number!";

    }
}