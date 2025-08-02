#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> v;
    v.push_back({1, 34});
    v.push_back({4});
    v.push_back({344, 78, 44});
    for(int i=0; i<v.size();i++){
        for(auto it=v[i].begin(); it!=v[i].end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    //adding a vector using insert
    vector<vector<int>> :: iterator it;
    it=v.begin();
    v.insert(it+1, {10, 20, 30});
    cout<<"After inserting a vector at position 1:"<<endl;
     for(int i=0; i<v.size();i++){
        for(auto it=v[i].begin(); it!=v[i].end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    //using pop_back to remove the last vector
    v.pop_back();
    cout<<"After popping the last vector:"<<endl;
     for(int i=0; i<v.size();i++){
        for(auto it=v[i].begin(); it!=v[i].end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}