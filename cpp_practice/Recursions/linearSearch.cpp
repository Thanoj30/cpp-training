#include<iostream>
using namespace std;
void print(int arr[],int size){
    cout<<"array size is:"<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool search(int arr[],int size,int key){
    print(arr,size);
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        return search(arr+1,size-1,key);
}
}
int main(){
    int arr[7]={8,5,9,0,2,4,6};
    int size=7;
    int key;
    cout<<"enter key to search:";
    cin>>key;
    search(arr,size,key);
    if(search(arr,size,key)){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
    return 0;
}