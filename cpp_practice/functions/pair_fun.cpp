#include<iostream>
#include<utility>
using namespace std;
int main(){
    // Using pair to store a pair of values
    pair<string,int>p1("hi",44);
    pair<int,string>p2;
    p2=make_pair(12,"tanu");
    //using auto to access pair elements
    auto p3=make_pair("tt",30);
    // Accessing pair elements
    cout<<"for p1 = "<<p1.first<<","<<p1.second<<endl;
    cout<<"for p2 = "<<p2.first<<","<<p2.second<<endl;
    cout<<"for p3 = "<<p3.first<<","<<p3.second<<endl;
    // Copying pair
    pair<string,int>p4(p1);
    cout<<"for p4 = "<<p4.first<<","<<p4.second<<endl;
    //using swap function
    pair<int,string>p5(44,"kt");
    cout<<"for p5 = "<<p5.first<<","<<p5.second<<endl;
    // Swapping pairs
    p2.swap(p5);
    cout<<"after swapping p1 and p2"<<endl; 
    cout<<"for p5 = "<<p5.first<<","<<p5.second<<endl;
    cout<<"for p2 = "<<p2.first<<","<<p2.second<<endl;
    return 0;
}
