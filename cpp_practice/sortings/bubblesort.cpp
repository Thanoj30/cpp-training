#include<iostream>
using namespace std;
int main(){
    int swapCount=0;
    cout<<"Enter array size:";
    int n;
    cin>>n;
    cout<<"Enter unsorted array elements:"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
       for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapCount++;
       }  
    }
}
    cout<<"sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"swap count is:"<<swapCount;
} 
