#include<iostream>
using namespace std;
void min_value(int[], int);
void max_value(int[], int);
int main(){
    int arr[5]={10, 20, 30, 40, 50};
    min_value(arr,5);
    max_value(arr,5);
}
void min_value(int a[],int size){
    int min = a[0];
    for(int i=1; i<size; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    cout << "Minimum value in the array is: " << min << endl;
}
void max_value(int a[],int size){
    int max = a[0];
    for(int i=1; i<size; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    cout << "Maximum value in the array is: " << max << endl;
}