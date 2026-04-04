#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, q;
    int k_length, k_member;
    vector<vector<int>> a;
    vector<int> k; 
    int x,y; 
    cin >> n >> q;
    for(int i = 0; i < n; i++)
    {
        cin >> k_length;
        for(int j = 0; j < k_length; j++)
        {
            cin >> k_member;
            k.push_back(k_member);
        }
        a.emplace_back(k);
        k.clear();
    }
    for(int i = 0; i < q; i++)
    {
        cin >> x >> y;
        cout << a.at(x).at(y) << endl;   
    }   
    return 0;
}
