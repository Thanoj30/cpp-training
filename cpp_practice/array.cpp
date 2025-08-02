
#include<iostream>
using namespace std;
int main(){
   /* int arr[15]={0};
    arr[0]=10;
    arr[14]=150;
    for(int i=0;i<15;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;*/
    int arr1[5],arr2[5],arr[5];
    int i=0;
    cout<<"enter the first array elements:";
    for( i=0;i<5;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter the second array elements:";
    for(i=0;i<5;i++)
    {
        cin>>arr2[i];
    }
    for(i=0;i<5;i++)
    {
        arr[i]=arr1[i]+arr2[i];
        cout<<"sum at index "<<i<<" is:"<<arr[i]<<endl;
    }
}



