#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,0,78,8,9};
    //begin() and end() methods
   vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << " "<<endl;
    }
    // Using rbegin() and rend() methods
    vector<int>::reverse_iterator rit;
    for(rit=v.rbegin(); rit!=v.rend(); rit++){
        cout << *rit << " ";
    }
 }
