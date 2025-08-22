
#include<iostream>
using namespace std;
int main(){
    int n,total=0;

    for(int i=1;i<=4;i++)
    {
        cout<<"enter a number:"<<endl;
        cin>>n;
        if(n<0)
        {
        continue ;
    }
    total +=n;
}
cout<<total;
return 0;
}
