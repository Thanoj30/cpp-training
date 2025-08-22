#include<iostream>
#include<string>
using namespace std;
int main(){
    // Using C++ string class 
    string str1;
    str1=("thanoj");
    string str2={"reddy"};
    string str3 {str2};
    cout<<str1<<endl<<str3<<endl;
    //repeating a same element
    string str4(5, 'a'); 
    cout<<str4<<endl;
    //using string constructor
    //from a character array
    string str5{str1,3};
    string str6={"ganesh",2};
    cout<<str5<<endl<<str6<<endl;
    //take input from user
    string str7;
    cout << "Enter your name: ";
    getline(cin, str7);
    cout << "Your name is: " << str7 << endl;
    //boundary checking
   // cout<<str1.at(44)<<endl;
    //using range based for loop
    for(char c : str1){
        cout << c << " "<<endl;
    }
    cout << endl;
    //concatenation of strings
    string str8 = str1 + " " + str6;
    cout << "Concatenated string: " << str8 << endl;
    //finding length of string
    cout << "Length of str1: " << str1.length() << endl;
    cout << "Length of str2: " << str2.length() << endl;
    return 0;

}