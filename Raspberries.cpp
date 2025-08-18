#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans = LLONG_MAX;

        if (k == 2) {
            for (int x : a) ans = min(ans, 1LL * (x % 2 == 0 ? 0 : 1));
        } 
        else if (k == 3) {
            for (int x : a) ans = min(ans, 1LL * ((3 - x % 3) % 3));
        } 
        else if (k == 5) {
            for (int x : a) ans = min(ans, 1LL * ((5 - x % 5) % 5));
        } 
        else if (k == 4) {
            long long case1 = LLONG_MAX;
            for (int x : a) case1 = min(case1, 1LL * ((4 - x % 4) % 4));

            vector<int> twos;
            for (int x : a) twos.push_back((2 - x % 2) % 2);
            sort(twos.begin(), twos.end());
            long long case2 = 1LL * twos[0] + twos[1];

            ans = min(case1, case2);
        }

        cout << ans << "\n";
    }
    return 0;
}
