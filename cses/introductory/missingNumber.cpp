// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 2 * 1e5 + 10;
const int MIN = -MAX;

void solve() {
    int n; cin >> n;
    int s = 0;
    int s2 = (n * (n + 1)) / 2;

    for(int i = 0; i < n-1; i++) {
        int x; cin >> x;
        s += x;
    }
    cout << s2 - s;
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}