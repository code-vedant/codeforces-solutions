#include <bits/stdc++.h>
using namespace std;
                    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
                    
    int t;
    cin >> t;
            
    while(t--){
        long long n;
        cin >> n;

        long long ans = 2;
        while(n%ans == 0){
            ans++;
        }
        

        cout << ans - 1<< endl;

    }
            
    return 0;
}