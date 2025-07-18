#include<iostream>
using namespace std;
int main()
{
    int i,j,space,rows;
    cout<<"enter no of rows:";
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
        cout<<"*";
        }
        cout<<endl;
    }
    for(i=rows-1;i>0;i--)
    {
        for(int space=1;space<=(rows-i);space++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}