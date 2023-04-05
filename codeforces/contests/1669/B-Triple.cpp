// Made by Cristian Motta
#include <iostream>
#include <map>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int n;
    cin >> n;
    map<int, int> mp;
    int s = -1;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mp[a]++; 
        if(mp[a] > 2) {
            s = a;
        }
    }
    cout << s << "\n";
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}