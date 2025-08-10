#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        if (a[0] == a[n - 1]) {
            cout << "YES\n";
            continue;
        }

        vector<int> vals;
        vals.push_back(a[0]);
        for (int i = 1; i < n; i++) {
            if (a[i] != vals.back()) vals.push_back(a[i]);
        }

        if (vals.size() > 2) {
            cout << "NO\n";
            continue;
        }

        int cnt1 = count(a.begin(), a.end(), vals[0]);
        int cnt2 = n - cnt1;

        if (abs(cnt1 - cnt2) <= 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
