// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

vector<int> memo(MAX, -1), c;

int dp(int x) {
    memo[0] = 0;

    if(x < 0) {
        return oo;
    }
    else if(memo[x] != -1) {
        return memo[x];
    }
    else {
        memo[x] = oo;

        for(int i : c) {
            memo[x] = min(memo[x], dp(x - i) + 1);
        }
        return memo[x];
    }
}

void solve() {
    int n, x; cin >> n >> x;

    for(int i = 0; i < n; i++) {
        int ci; cin >> ci;
        c.push_back(ci);
    }

    int ans = dp(x);
    cout << ((ans == oo) ? -1 : ans);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}