#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        int odd = 0;
        for (int f : freq) if (f % 2) odd++;

        if (k >= odd - 1 && k <= n - 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
