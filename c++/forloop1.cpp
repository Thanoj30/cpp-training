
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter number of rows"<<endl;
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if((i+j)<=rows)
            cout<<" ";
            else
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}
