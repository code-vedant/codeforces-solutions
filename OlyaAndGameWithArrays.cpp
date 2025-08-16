#include <bits/stdc++.h>
using namespace std;
                    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
                    
    int t;
    cin >> t;
            
    while(t--){
        int n;
        cin >> n;
        vector<vector<long long>> a(n);
        vector<long long> b(n);
        long long sum = 0;
        for(int i= 0 ; i < n ; i++){
            int m;
            cin >> m;
            a[i].resize(m);
            for(int j = 0 ; j < m ; j++){
                cin >> a[i][j];
            }
            sort(a[i].begin(), a[i].end());
            sum += a[i][1];
            b[i] = a[i][1];
        }

        sum -= *min_element(b.begin(), b.end());

        long long mini = a[0][0];
        for(int i = 0 ; i < n ; i++){
            mini = min(mini, a[i][0]);
        }
        sum += mini;

        cout << sum << endl;

    }
            
    return 0;
}