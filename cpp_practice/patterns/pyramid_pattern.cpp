#include<iostream>
#include<string>
using namespace std;
int main(){
    string str{};
    cout<<"enter string elements:";
    getline(cin,str);
    int len=str.length();
    int position=0;
    for(char c:str){
        int spaces=len-(position-1);
        while(spaces>0){
            cout<<" ";
            spaces--;
        }
     for(int i=0;i<position;i++){
        cout<<str.at(i);
     }   
     cout<<c;
     for(int i=position-1;i>=0;i--){
        cout<<str.at(i);
     }
     cout<<endl;
     position++;
    }
    return 0;
}