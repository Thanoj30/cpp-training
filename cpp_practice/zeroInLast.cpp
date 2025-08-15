#include<iostream>
using namespace std;
int main(){
    int nums[]={2,0,1,2,0,5,0,0,6,};
    int nonZero=0;
    for(int j=0;j<sizeof(nums)/sizeof(nums[0]);j++){
        if(nums[j]!=0){
            swap(nums[j],nums[nonZero]);
            nonZero++;
        }
    }
    for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
        cout<<nums[i]<<" ";
    }
}