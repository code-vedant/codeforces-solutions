#include <bits/stdc++.h>
using namespace std;
                    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
                    
    int t;
    cin >> t;
    
    int sum = 0;

    while(t--){
        string s;
        cin >> s;
        if(s == "++X" || s == "X++")
            sum++;
        else
            sum--;    
    }

    cout << sum << endl;
            
    return 0;
}