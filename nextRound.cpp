#include <bits/stdc++.h>
using namespace std;
                    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
                
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i = 0 ; i < n ; i++ ) cin >> a[i];

    int total = 0;
    
    for(int x : a){
        if(x >= a[k-1] && x > 0)
            total++;
    }

    cout << total << endl;
            
    return 0;
}