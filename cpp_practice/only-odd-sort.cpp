#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
vector<int> :: iterator it;
it=numbers.begin();
while(it != numbers.end()) {
    if(*it % 2 == 0) 
    {
        numbers.erase(it); 
    } 
    else {
        it++; 
    }
}
    for(auto num : numbers) {
        cout << num << " ";
    }
    return 0;
}


