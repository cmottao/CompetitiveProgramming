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
    int n, m, k; cin >> n >> m >> k;
    int person = 0, ap = 0, ans = 0;
    vector<int> a(n), b(m);

    for(int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < m; i++) {
        cin >> b[i]; 
    }
    sort(b.begin(), b.end());

    while(person < n && ap < m) {
        if(b[ap] >= (a[person] - k) && b[ap] <= (a[person] + k)) {
            ans++; person++; ap++;
        }
        else {
            if(b[ap] < a[person]) {
                ap++;
            }
            else {
                person++;       
            }
        }
    }
    cout << ans;
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}