#include <vector>
#include <algorithm>
using namespace std;
vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1, j = m - 1, carry = 0;
    vector<int> ans;

    // keep looping until both arrays and carry are exhausted
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--];
        if (j >= 0) sum += b[j--];
        
        ans.push_back(sum % 10);
        carry = sum / 10;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}