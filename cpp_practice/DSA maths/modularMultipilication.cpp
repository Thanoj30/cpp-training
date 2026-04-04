#include <iostream>
using namespace std;
const long long MOD = 1000000007;
int main() {
    long long ans = 1;
    for (int i = 1; i <= 212; i++) {
        ans = (ans * i) % MOD;  // modular multiplication
    }
    cout << "212! mod 1e9+7 = " << ans << endl;
    return 0;
}
