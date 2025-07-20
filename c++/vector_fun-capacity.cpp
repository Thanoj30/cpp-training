#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    //size(),max_size(), capacity() methods
    cout << "Size of vector: " << v.size() << endl; 
    cout << "Max size of vector: " << v.max_size() << endl; 
    cout << "Capacity of vector: " << v.capacity() << endl;
    //push_back() method
    v.push_back(6); 
    cout << "After push_back(6), size: " << v.size() << ", capacity: " << v.capacity() << endl;
    //resize() method
    v.resize(10);   
    cout << "After resize(10), size: " << v.size() << ", capacity: " << v.capacity() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    //reserve() method
    v.reserve(20);
    cout << "\nAfter reserve(20), size: " << v.size() << ", capacity: " << v.capacity() << endl;
    //shrink_to_fit() method
    v.shrink_to_fit();
    cout << "After shrink_to_fit(), size: " << v.size() << ", capacity: " << v.capacity() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }   
    cout << endl;
    return 0;
}