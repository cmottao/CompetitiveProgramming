// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    string acg;
    cin >> acg;
    int n = acg.size();
    int dna = 1;
    int s = 1;

    for(int i = 0; i < n-1; i++) {
        if(acg[i] == acg[i+1]) {
            s += 1;
        }
        else {
            if(s > dna) {
                dna = s;
            }
            s = 1;
        }        
    }
    dna = max(dna, s);
    cout << dna;
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}