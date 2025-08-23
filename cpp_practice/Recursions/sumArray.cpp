#include<iostream>
using namespace std;
int getSum(int arr[],int size){
    if(size==0){
        return 0;
    }
    else{
        return arr[0]+getSum(arr+1,size-1);
    }
}
int main(){
    int arr[5]={4,5,2,7,5};
    int size=5;
    int sum=getSum(arr,size);
    cout<<"Sum is "<<sum<<endl;
    return 0;
}