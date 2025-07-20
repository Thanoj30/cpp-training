#include<iostream>
using namespace std;
int main(){
    float marks[3][4] = { {1.1, 2.2, 3.3, 4.4}, 
                     {5.5, 6.6, 7.7, 8.8}, 
                     {9.9, 10.10, 11.11, 12.12} };
    int arr[3][4] = { {1, 2, 3, 4}, 
                     {5, 6, 7, 8}, 
                     {9, 10, 11, 12} };
    char name[10] = "Hello";
    cout << "Size of name: " << sizeof(name) << " bytes" << endl;
    cout << "Size of arr: " << sizeof(arr) << " bytes" << endl;
    cout<<"size of marks: " << sizeof(marks) << " bytes" << endl;
}