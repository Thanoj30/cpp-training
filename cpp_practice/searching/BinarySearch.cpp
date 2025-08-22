#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int oddArray[7]={1,2,4,5,6,6,8};
    int evenArray[6]={0,3,4,6,7,9};

    int evenIndex=binarySearch(oddArray,7,4);
    int oddIndex=binarySearch(evenArray,6,0);
    cout<<"Index of 4 is "<<evenIndex<<endl;
    cout<<"Index of 0 is "<<oddIndex<<endl;
    return 0;
}