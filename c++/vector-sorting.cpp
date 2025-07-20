#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
int main() {
    vector<int> numbers = {5, 2, 9, 1, 5, 6};
    sort(numbers.begin(), numbers.end());
    for(auto num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    // Sorting in descending order
    sort(numbers.begin(), numbers.end(), greater<int>());
    for(auto num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}