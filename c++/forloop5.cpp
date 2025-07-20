<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=5;i>0;i--)
    {
        for(int space=1;space<=(5-i);space++)
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
=======
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=5;i>0;i--)
    {
        for(int space=1;space<=(5-i);space++)
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
>>>>>>> 9a9eeff8ce8d2c9e5d9d980d198a6a1557567a89
}