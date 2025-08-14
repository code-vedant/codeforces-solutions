#include <bits/stdc++.h>
using namespace std;

long long countOnes(unsigned long long num) {
    long long count = 0;
    while (num) {
        num &= (num - 1);
        count++;
    }
    return count;
}

int main() {
    long long t;
    cin >> t;

    while(t--){
        long long n,k;
        cin >> n >> k;

        vector<long long>a(n);

        long long ans = 0;

        for(long long i = 0 ; i < n ; i++) {
            long long x;
            cin >> x;
            if(countOnes(x) > countOnes(x+1)){
                a[i] = x;
                ans += countOnes(x);
                }
            else if(countOnes(x) < countOnes(x+1) && k > 0){
                ans += countOnes(x+1);
                a[i] = x+1;
                k--;
            }
            
        }

        cout << ans << endl;

    }


    return 0;
}