#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int key){
    //base case
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
        return binarySearch(arr,s,mid-1,key);
    }
    else{
        return binarySearch(arr,mid+1,e,key);
    }
}
int main(){
int arr[11]={2,4,6,10,14,16,34,45,47,54,90};
int size=11;
int key=47;
cout<<"present or not:"<<binarySearch(arr,0,size-1,key)<<endl;
return 0;
}