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
const int N = 2e5 + 5;

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
    ll n;
        cin>>n;
        ll a;
        vector<pair<ll,ll>>v;
        for(int i=0;i<n;i++){
            cin>>a;
            v.pb({a,i});
        }
        vector<ll>pre(n);
        sort(all(v));//nlogn
        pre[0]=v[0].fi;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+v[i].fi;
        }
        vector<ll>ans(n);
        for(int i=0;i<n;i++){
            int j=i;
            int found=i;
            while(j<n){
                pair<ll,ll>temp={pre[j]+1,INT_MIN};
                ll idx=lower_bound(v.begin(),v.end(),temp)-v.begin();
                idx--;
                if(idx==j){
                    break;
                }
                found+=idx-j;
                j=idx;
            }
            ans[v[i].second]=found;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
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