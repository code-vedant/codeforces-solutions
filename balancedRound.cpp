#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());

        int l = 1 , cnt = 1;

        for(int i = 1 ; i < n ; i++){
            if((arr[i] - arr[i-1]) <= k)
                cnt++;
            else
                cnt = 1;

            l = max(l,cnt);        
        }

        cout << n-l << "\n";
    }
    return 0;
}
