#include <bits/stdc++.h>
using namespace std;

bool isEven(int n){
    if(n%2)
        return false;

    return true;    
}
                    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
                    
    int t;
    cin >> t;
            
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0 ; i < n ; i++ ) cin >> a[i];

        if(isEven(n)){
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }else{
            cout << 4 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << n - 1 << " " << n << endl;
            cout << n - 1 << " " << n << endl;
        }
    }
            
    return 0;
}