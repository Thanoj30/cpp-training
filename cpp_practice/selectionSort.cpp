#include<iostream>
using namespace std;
int main(){
    cout<<"Enter array size:";
    int n;
    cin>>n;
    cout<<"Enter unsorted array elements:"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       int minIndex=i;
       for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex])
        minIndex=j;
       }
       swap(arr[minIndex],arr[i]);
    }
    cout<<"sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

} 