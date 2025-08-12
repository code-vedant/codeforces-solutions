#include <bits/stdc++.h>
using namespace std;
                    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n,k,x;
        cin >> n >> k >> x;

        long long minSum = (k*(k+1))/2;
        long long maxSum = (k*n) - (k*(k-1))/2;

        if(minSum <= x && x <= maxSum){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
                    
    return 0;
}