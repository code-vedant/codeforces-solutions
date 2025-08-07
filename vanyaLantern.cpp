#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,l;
    cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double maxGap = 0.0;
    for (int i = 1; i < n; i++) {
        maxGap = max(maxGap, (a[i] - a[i - 1]) / 2.0);
    }
    double maxLength = max(a[0], l - a[n - 1]);
    maxGap = max(maxGap, maxLength);
    cout << fixed << setprecision(10) << maxGap << endl;
    
             
    return 0;
}