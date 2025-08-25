#include<iostream>
using namespace std;
bool checkPalindrome(string name,int s,int e){
    //base case
    if(s>e){
        return true;
    }
    if(name[s]!=name[e]){
        return false;
    }
    else{
        return checkPalindrome(name,s+1,e-1);
    }
}
int main(){
    string name="thanoj";
    bool isPalindrome=checkPalindrome(name,0,name.length()-1);
    if(isPalindrome){
        cout<<"it is palindrome"<<endl;
    }
    else{
        cout<<"it is not palindrome"<<endl;
    }
}