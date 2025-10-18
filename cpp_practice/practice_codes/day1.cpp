#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void gettingArray(vector<int>& arr, int n){
    arr.resize(n);
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void printArray(const vector<int>& arr){
    cout<<"the elements of array:";
    for(size_t i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void highestElement(const vector<int>& arr){
    int highest=arr[0];
    for(int i=1;i<arr.size();i++)
{
    if (arr[i]>highest){
        highest=arr[i];
    }
}
    cout<<"the highest element in the array is:"<<highest<<endl;
}

int main(){
    int n;
    cout<<"enter the length of array:";
    cin>>n;
    vector<int> arr;
    gettingArray(arr, n);
    printArray(arr);
    highestElement(arr);
    sort(arr.begin(), arr.end(), greater<int>());
    printArray(arr);
  /*  sort(arr.begin(), arr.end());
    printArray(arr);
    cout<<"enter which highest element you want:";
    int k;
    cin>>k;
    int m=arr[arr.size()-k];
    cout<<"the "<<k<<" highest element is:"<<m<<endl;*/
    cout<<"enter which highest element you want:";
    int k;
    cin>>k;
    int m=arr[k-1];
    cout<<"the "<<k<<" highest element is:"<<m<<endl;
   return 0;
}