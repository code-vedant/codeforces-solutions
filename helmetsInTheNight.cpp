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

struct Resident {
    ll a, b;
};

void solve() {
    int n;
    ll p;
    cin >> n >> p;

    vector<Resident> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i].a;
    for (int i = 0; i < n; i++) cin >> arr[i].b;

    sort(arr.begin(), arr.end(), [](auto &x, auto &y) {
        return x.b < y.b;
    });

    ll ans = p;
    int remaining = n - 1;

    for (int i = 0; i < n && remaining > 0; i++) {
        int take = min((ll)remaining, arr[i].a);
        ans += take * min(arr[i].b, p);
        remaining -= take;
    }

    cout << ans << "\n";
}

//--------------------------//
//          Main            //
//--------------------------//
int main() {
    fastio();
    
    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}