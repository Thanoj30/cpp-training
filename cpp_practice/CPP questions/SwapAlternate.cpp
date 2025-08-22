#include<iostream>
using namespace std;
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
void SwapArray(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
    }
}
}
int main(){
    int even[8]={2,4,1,6,4,7,8,3};
    int odd[7]={5,7,2,5,9,0,1};
    SwapArray(even,8);   
    PrintArray(even,8);
    SwapArray(odd,7);
    PrintArray(odd,7);

    

}