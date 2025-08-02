#include<iostream>
#include<string>
using namespace std;
int main(){
    string full_name="Thanojreddy";
    string first_name(full_name,0,6);
    string last_name=full_name.substr(7,11);
    string changed_name=first_name+last_name;
    changed_name.insert(6," ");
    cout<<changed_name<<endl;
    return 0;
}