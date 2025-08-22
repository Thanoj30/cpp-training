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
        int temp=arr[i];
        int j=i-1;
       for(;j>=0;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
            swapCount++;
        }
        else{
            break;
        }    
    } 
    arr[j+1]=temp; 
}
    cout<<"sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"swap count is:"<<swapCount;    
}