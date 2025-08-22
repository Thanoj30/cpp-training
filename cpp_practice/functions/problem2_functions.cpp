#include<iostream>
#include<string>
using namespace std;
void print_array(string arr[],int size);
void clear_array(string arr[],int size);
int main(){
    string arr[4]={"tanu","thanoj","tanuj","tanuja"};
    print_array(arr,4);
    clear_array(arr,4);
    print_array(arr,4);
}
void print_array(string arr[],int size){
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void clear_array(string arr[],int size){
    for(int i=0;i<size;i++){
    arr[i]="";
    }
    cout<<"list cleared";
}
