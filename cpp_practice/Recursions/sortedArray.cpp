#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {

    //base case
    if(size == 0 || size == 1 ){
        return true;
    }

    if(arr[0] > arr[1])
        return false;
    else {
       arr++;
       size--;
    return isSorted(arr, size);
    }

}

int main() {

    int arr[5] = {2,4,9,9,7};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout << "Array is sorted " << endl;
    }
    else {
        cout << "Array is not sorted " << endl;
    }

    return 0;
}
// #include<iostream>
// using namespace std;
// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void update(int arr[],int size){
//     arr=arr+1;
//     size=size-1;
//     print(arr,size);
// }
// int main(){
//     int arr[]={2,4,5,2,1};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     update(arr,size);
// }