// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

void solve() {
    int n, m, k, h; cin >> n >> m >> k >> h;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int hi; cin >> hi;
        int dif = abs(hi - h);

        if(dif / k >= 1 && dif / k < m && dif % k == 0) {
            ans++;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}