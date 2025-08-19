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
int countUnq(string s) {
    set<char> uniqueChars;
    for (char c : s) {
        uniqueChars.insert(c);
    }
    return uniqueChars.size();
}

void solve() {
    // your logic here
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    map<char, int> charCount;
    vector<int>distinct(n,0);

    for(int i = 0; i < n; i++) {
        charCount[s[i]]++;
        if(charCount[s[i]] == 1) {
            count++;
        } 
        distinct[i] = count;
    }
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ans += distinct[i];
    }

    cout << ans << '\n';
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