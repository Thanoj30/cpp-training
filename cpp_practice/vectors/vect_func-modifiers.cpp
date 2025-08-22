#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers={1, 2, 3, 4, 5};
    //vector modifiers: push_back, pop_back, insert, erase, clear
    cout << "Original vector: ";
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    // push_back() method
    numbers.push_back(6);   
    cout << "After push_back(6): ";
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    // pop_back() method
    numbers.pop_back();     
    cout << "After pop_back(): ";
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    // insert() method
    numbers.insert(numbers.begin() + 2, 10);
    cout << "After insert(10 at index 2): ";
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    //insert using itterator
    vector<int>::iterator it = numbers.begin() + 3;
    numbers.insert(it, 20, 30);
    cout << "After insert(20, 30 at index 3): ";
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    // erase() method
    numbers.erase(numbers.begin() + 1);
    cout << "After erase(index 1): ";
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    // clear() method
    numbers.clear();
    cout << "After clear(): ";
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
