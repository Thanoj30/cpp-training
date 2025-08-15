#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v1={2,3,1,2,3};
    vector<int>v;
    sort(v1.begin(),v1.end());
    for(int i=0;i<v1.size()-1;i++){
        if(v1[i]==v1[i+1]){
        if(v.empty()||v.back()!=v1[i])
        v.push_back(v1[i]);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}