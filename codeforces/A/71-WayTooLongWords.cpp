// Made by Cristian Motta
#include <iostream>
using namespace std;

#define int long long int
#define double long double

const int MAX = 100 + 10;
const int MIN = -MAX;

string arr[MAX];
void solve() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string word;
        cin >> word;
        arr[i] = word;
    }

    for(int i = 0; i < n; i++) {
        if(arr[i].length() > 10) {
            cout << arr[i][0] << arr[i].length() - 2 << arr[i][arr[i].length() - 1] << "\n";
        }
        else {
            cout << arr[i] << "\n";
        }
    }
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}