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
    int n,q;
    cin >> n >> q;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    
    set<ll> uniq;
    for (int i = 0; i < q; i++) {
        ll x;
        cin >> x;
        uniq.insert(x);
    }

    for (auto i : uniq) {
        ll v = 1LL << i;       // 2^i
        ll add = 1LL << (i-1); // 2^(i-1)
        for (auto &j : a) {
            if (j % v == 0) {
                j += add;
            }
        }
    }

    for (auto x : a) cout << x << ' ';
    cout << "\n";

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
