#include<iostream>
using namespace std;
bool isPalindrom(char arr[],int n,char arr2[],int m){
   if (n != m) return false; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}
int main(){
    int n=5;
    char arr[5];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int m=n;
    char arr2[5];
    for (int i = 0; i < n; i++) {
        arr2[i] = arr[n - 1 - i];
    }
cout << isPalindrom(arr, n, arr2, m);
return 0;
}
