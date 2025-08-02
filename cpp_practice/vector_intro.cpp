#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers(10);;
    // Initializing the vector with 10 elements
    int value;
    for(int i = 0; i < 3; i++){
        cout << "Enter a number: ";
        cin >> value;
        numbers.push_back(value);
    }
    // Displaying the elements of the vector
    cout << "You entered: ";
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }
    // Displaying the size and capacity of the vector
    cout<<"\nSize of vector: " << sizeof(numbers) << " bytes" << endl;
    cout << "Capacity of vector: " << numbers.capacity() << endl;
    cout << "Size of vector: " << numbers.size() << endl;
    // Using vector's fill constructor
    fill(numbers.begin(), numbers.end(), 4);
    for(int i=0;i<numbers.size();i++){
        cout << numbers[i]<< endl;
    }
    // Using vector's range constructor
   vector<int> numbers{1, 2, 3, 4, 5};
   vector<int> numbers2(numbers.begin(), numbers.end());
   cout << "Elements in numbers2: ";
    for(int num : numbers2) {
         cout << num << " ";
    }
    cout << endl;
}
