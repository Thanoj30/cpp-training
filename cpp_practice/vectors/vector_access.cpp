#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers={3,0,67,9,4};
    // Displaying the elements of the vector
    cout<<"Elements at index 0: " << numbers[0] << endl;
    // Accessing elements using at() method
    cout<<"Elements at index 1: " << numbers.at(1) << endl;
    // Accessing elements using at() method with out of range index
    cout<<"Elements at index 10 is: " << numbers.at(10) << endl;
    // Accessing elements using front() and back()
    cout<<"Last element: " << numbers.back() << endl;
    cout<<"First element: " << numbers.front() << endl;
    // Changing the second element using at() method
    numbers.at(1)=10;
    cout<<"After changing second element: " << numbers[1] << endl;
    return 0;
}