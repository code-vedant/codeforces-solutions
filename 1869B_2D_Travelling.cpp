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
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

//--------------------------//
//      Main Solve Fn       //
//--------------------------//
void solve()
{
    // your logic here
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<ll> x(n + 1), y(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }

    ll direct_cost = llabs(x[a] - x[b]) + llabs(y[a] - y[b]);

    ll mins = LLONG_MAX, mint = LLONG_MAX;

    for (int i = 1; i <= k; i++)
    {
        ll da = llabs(x[a] - x[i]) + llabs(y[a] - y[i]);
        ll db = llabs(x[b] - x[i]) + llabs(y[b] - y[i]);
        mins = min(mins, da);
        mint = min(mint, db);
    }

    ll ans = (k > 0) ? min(direct_cost, mins + mint) : direct_cost;

    cout << ans << "\n";
}

//--------------------------//
//          Main            //
//--------------------------//
int main()
{
    fastio();

    int t = 1;
    cin >> t; // comment if single test case
    while (t--)
    {
        solve();
    }
    return 0;
}