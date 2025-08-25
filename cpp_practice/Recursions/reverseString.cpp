#include<iostream>
using namespace std;
int reverse(string& str,int s,int e){
    //base case
    if(s>e){
        return 0;
    }
    swap(str[s],str[e]);
    s++;
    e--;
    return reverse(str,s,e);
}
int main(){
    string str;
    cout<<"enter a string:";
    cin>>str;
    reverse(str,0,str.length()-1);
    cout<<"reversed string is:"<<endl;
    cout<<str;
    return 0;
}