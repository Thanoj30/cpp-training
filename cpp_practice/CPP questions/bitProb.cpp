#include<iostream>
using namespace std;
int minMoves(int A, int B, int C) {
    int moves = 0;
    for (int i = 0; i < 32; i++) {
        int a = (A >> i) & 1;
        int b = (B >> i) & 1;
        int c = (C >> i) & 1;

        if (c == 0) {
            if (a == 1 && b == 1) {
                moves += 1; // need to flip at least one
            }
        } else { // c == 1
            if (a == 0 && b == 0) moves += 2;
            else if (a == 0 || b == 0) moves += 1;
        }
    }
    return moves;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        cout << minMoves(A, B, C) << "\n";
    }
    return 0;
}
