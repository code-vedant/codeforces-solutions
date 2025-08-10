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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        bool changed = true;
        while (changed) {
            changed = false;
            for (int i = 1; i < n - 1; i++) {
                if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                    changed = true;
                }
            }
        }

        if (is_sorted(arr.begin(), arr.end()))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
