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
bool can_build(const vector<ll>& a, ll h, ll x) {
    ll needed = 0;
    for (ll val : a) {
        if (val < h) needed += (h - val);
        if (needed > x) return false;
    }
    return needed <= x;
}

void solve() {
    // your logic here
    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll ho = 0, hm = *max_element(a.begin(), a.end()) + x;

    ll ans = 0;

    while(ho <= hm){
        ll mid = ho + (hm - ho) / 2;
        if (can_build(a, mid, x)) {
            ans = mid;
            ho = mid + 1;
        } else {
            hm = mid - 1;
        }
    }
    cout << ans << "\n";

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