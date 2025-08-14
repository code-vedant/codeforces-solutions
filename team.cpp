#include <bits/stdc++.h>
using namespace std;
                    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
                    
    int t;
    cin >> t;
            
    int ans = 0;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        if((a+b+c) > 1)
            ans++;
    }

    cout << ans << endl;
            
    return 0;
}