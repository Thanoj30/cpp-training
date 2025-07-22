#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char f_name[20];
    char l_name[20];
    char  full_name[50];
    cout << "Enter first name: ";
    cin>> f_name;
    cout << "Enter last name: ";
    cin >> l_name;
    cout<<"hi "<<f_name<<" your first name has "<<strlen(f_name)<<" characters"<<endl
    <<" and your last name has "<<strlen(l_name)<<" characters"<<endl;
    strcpy(full_name, f_name);
    strcat(full_name, " ");
    strcat(full_name, l_name);
    cout<< "Your full name is: " << full_name << endl;
    return 0;

}