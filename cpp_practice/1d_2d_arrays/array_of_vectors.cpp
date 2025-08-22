#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1[3];
    //initializing the vector of vectors using push_back
    v1[0].push_back(1);
    v1[0].push_back(34);
    v1[1].push_back(4);
    v1[2].push_back(344);
    v1[2].push_back(78);
    v1[2].push_back(44);
    //printing the vector of vectors using nested for loop
    for(int i=0;i<3;i++){
        for(int j=0;j<v1[i].size();j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    //initializing the vector by user input using for loop
    cout<<"This is a second vector of vectors initialized by user input"<<endl;
    {
        vector<int> v2[3];
        for(int i=0;i<3;i++)
        {
        int n;
        cout<<"enter size of vector:"<<i+1<<":";
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int a;
            cin>>a;
            v2[i].push_back(a);
        }
    }
    //printing the vector of vectors after user input
    for(int i=0;i<3;i++){
        cout<<"number of elements in vector "<<i+1<<" are: "<<v2[i].size()<<endl;
        for(int j=0;j<v2[i].size();j++){
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
}
 return 0;
}