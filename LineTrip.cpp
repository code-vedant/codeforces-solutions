#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n ,x;
        cin >> n >> x;
        vector<int>a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        int fuelCap = max(a[0] - 0,(x - a[n-1])*2);
        for(int i = 0 ; i < n-1 ; i++){
            fuelCap = max(fuelCap,a[i+1]-a[i]);
        }
        cout << fuelCap << "\n";
    }
                    
    return 0;
}