#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
bool isPossible(vector<long long> &trees, long long n, long long m, long long cutHeight) {
    long long wood = 0;
    for (long long i = 0; i < n; i++) {
        if (trees[i] > cutHeight) {
            wood += (trees[i] - cutHeight);
        }
    }
    return wood >= m; 
}
int main(){
    long long n=4,m=7;
    vector<long long> trees = {20, 15, 10, 17};
    long long start=0;
    long long end=*max_element(trees.begin(), trees.end());
    long long ans = 0;

    while (start <= end) {
        long long mid = start + (end - start) / 2;

        if (isPossible(trees, n, m, mid)) {
            ans = mid;        
            start = mid + 1;
        } else {
            end = mid - 1;    
        }
    }

    cout << ans << endl;
    return 0;
}

