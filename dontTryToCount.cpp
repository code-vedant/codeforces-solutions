#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        string x, s;
        cin >> x ;
        cin >> s;

        int ops = 0;
        bool found = false;

        for (int i = 0; i <= 10; i++) { 
            if (x.find(s) != string::npos) {
                cout << ops << "\n";
                found = true;
                break;
            }
            x += x;
            ops++;
        }

        if (!found) cout << "-1\n";
    }

    return 0;
}
