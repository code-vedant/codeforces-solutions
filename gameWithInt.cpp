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

        if((n+2)%3 == 0 || (n-2)%3 == 0){
            cout << "First" << endl;
        }else{
            cout << "Second" << endl;
        }

    }
                    
    return 0;
}