
#include<iostream>
using namespace std;
int sumArr(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = sumArr(arr,n);
    cout << result << endl;
    return 0;
}
// int main(){
//     int data[]={10,1,3,-4,7,5};
//     int total=0;
//     for(int i=0;i<6;i++)
//     {
//         for(int j=i+1;j<6;j++)
//         {
//             total +=data[i]*data[j];
//         }
//     }
//     cout<<"Totalint is: "<<total;
//     return 0;

// }
