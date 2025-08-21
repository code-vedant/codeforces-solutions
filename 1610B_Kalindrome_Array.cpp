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
int checkPalindrome(const vector<int>& a,int x) {
    int n = a.size();
    int l = 0, r = n - 1;
    while (l < r) {
            if (a[l] == x) l++;
            else if (a[r] == x) r--;
            else if(a[l] != a[r]) return 0;
        else {
            l++;
            r--;
        }
}

    return 1;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int flag = 1;

    for (int i = 0; i < n - 1 -i; i++)
    {
        if(a[i] != a[n - 1 - i]) {
                flag = checkPalindrome(a, a[i]) || checkPalindrome(a, a[n - 1 - i]);
                break;
        }
    }

    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }   
    
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