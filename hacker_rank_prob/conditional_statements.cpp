#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
 int i;
    int j;
    cin >> i;
    cin >> j;
    string numbers[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    for(int a = i; a <= j; a++){
        if (a >= 0 && a <= 9) {
            cout << numbers[a] << "\n";
        }else if(a % 2 == 0){
            cout << "even\n";
        }else{
            cout << "odd\n";
        }
    }
    return 0;
    
}
