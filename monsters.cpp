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
#define IF(cond, t, f) (cond ? t : f)

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
    ll n, k;
    cin >> n >> k;

    vector<pair<ll, int>> m;
    for (int i = 0; i < n; i++) {
        cin >> m[i].first ;
        m[i].second = i + 1;
    }

    sort(m.begin(), m.end(),[](pair<ll, int> a, pair<ll, int> b) {
        if(a.first%k == b.first%k) {
            return a.second < b.second; 
        }
        return IF(a.first % k, a.first % k, k) > IF(b.first % k, b.first % k, k);
    });

    for (int i = 0; i < n; i++) {
        cout << m[i].second << " ";
    }
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