#include <bits/stdc++.h>
#include <numeric>
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

ll gcd_all(const vector<ll>& v) {
    ll g = 0;
    for (ll x : v) g = gcd(g, x);
    return g;
}

void solve() {
    // your logic here
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> even,odd;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            even.pb(a[i]);
        } else {
            odd.pb(a[i]);
        }
    }
    ll g1 = gcd_all(even);
    ll g2 = gcd_all(odd);

    bool ok1 = true, ok2 = true;
        for (ll x : even) if (x % g1 == 0) { ok1 = false; break; }
        for (ll x : odd) if (x % g2 == 0) { ok2 = false; break; }

        if (ok1) cout << g1 << "\n";
        else if (ok2) cout << g2 << "\n";
        else cout << 0 << "\n";
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