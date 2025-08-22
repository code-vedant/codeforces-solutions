#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> queries(q);
    for (int i = 0; i < q; i++) cin >> queries[i];

    unordered_map<int,int> pos;
    for (int i = 0; i < n; i++) {
        if (!pos.count(a[i])) {
            pos[a[i]] = i+1;
        }
    }

    int top = 0;
    for (int t : queries) {
        cout << pos[t] << " ";
        
        int prevPos = pos[t];
        for (auto &kv : pos) {
            if (kv.second < prevPos) kv.second++;
        }
        pos[t] = 1;
    }

    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
