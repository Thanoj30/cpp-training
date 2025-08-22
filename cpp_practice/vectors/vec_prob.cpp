#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>> v={{1,2},{15,10},{5,-4}};
    //calculating sum of second elements in vector of pairs
    int sum=0;
    for(auto n:v)
    {
        sum+=n.second;
    }
    cout<<"sum of second elements using ranged loop:"<<sum<<endl;
    //another way to calculate sum
    int sum2=0;
    for(int i=0;i<v.size();i++)
    {
        sum2+=v[i].second;
    }
    cout<<"sum of second elements using index:"<<sum2<<endl;
}
