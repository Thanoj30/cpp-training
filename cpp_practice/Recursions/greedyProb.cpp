#include <bits/stdc++.h>
using namespace std;

int minNinjas(vector<pair<int,int>> &segments, int n) {
    // Step 1: Normalize so that L <= R
    for (int i = 0; i < n; i++) {
        if (segments[i].first > segments[i].second) {
            swap(segments[i].first, segments[i].second);
        }
    }

    // Step 2: Sort by right endpoint
    sort(segments.begin(), segments.end(), 
         [](auto &a, auto &b) {
             return a.second < b.second;
         });

    int ninjas = 0;
    int lastPos = INT_MIN; // last position where Ninja was placed

    // Step 3: Traverse segments
    for (int i = 0; i < n; i++) {
        if (segments[i].first > lastPos) {
            // Current segment not covered → place a Ninja
            ninjas++;
            lastPos = segments[i].second;  // place at right endpoint
        }
    }

    return ninjas;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<int,int>> segments(n);
        for (int i = 0; i < n; i++) {
            cin >> segments[i].first >> segments[i].second;
        }
        cout << minNinjas(segments, n) << endl;
    }
    return 0;
}
