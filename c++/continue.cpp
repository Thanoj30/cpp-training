
#include<iostream>
using namespace std;
int main(){
    int n,total=0;

    for(int i=1;i<=10;i++)
    {
        cout<<"enter a number:"<<endl;
        cin>>n;
        if(i<0)
        {
        continue ;
    }
    total +=n;
}
cout<<total;
return 0;
}
