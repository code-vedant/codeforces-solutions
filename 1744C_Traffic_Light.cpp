#include <bits/stdc++.h>
using namespace std;

//--------------------------//
//        Shortcuts         //
//--------------------------//
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

//--------------------------//
//        Constants         //
//--------------------------//
const int MOD = 1e9 + 7;
const ll INF = 1e18;
const int N = 2e5 + 5; // adjust as needed

//--------------------------//
//       Debugging          //
//--------------------------//
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

//--------------------------//
//       Fast I/O           //
//--------------------------//
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

//--------------------------//
//      Main Solve Fn       //
//--------------------------//
void solve() {
    // your logic here
    ll n; char c;
    cin >> n >> c;
    string s;
    cin >> s;

   string s2 = s + s;
    vector<int> next_green(2*n);
    int inf = 2*n;

    next_green[2*n-1] = (s2[2*n-1] == 'g') ? 0 : inf;

    for (int i = 2*n-2; i >= 0; i--) {
        if (s2[i] == 'g') next_green[i] = 0;
        else next_green[i] = next_green[i+1] + 1;
    }

    int max_wait = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == c) {
            max_wait = max(max_wait, next_green[i]);
        }
    }

    cout << max_wait << endl;

}

//--------------------------//
//          Main            //
//--------------------------//
int main() {
    fastio();
    
    int t = 1;
    cin >> t;   // comment if single test case
    while (t--) {
        solve();
    }
    return 0;
}