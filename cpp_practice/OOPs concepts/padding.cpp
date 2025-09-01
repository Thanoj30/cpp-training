#include<iostream>
using namespace std;
struct A {
    char c;   // 1 byte
    int x;    // 4 bytes
    char d;   // 1 byte
};

int main() {
    cout << "Size of struct A: " << sizeof(A) << endl;
    return 0;
}