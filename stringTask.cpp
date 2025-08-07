#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

     for (char &c : s) {
        c = tolower(c);
    }

    string ans = "";

    for(int i = 0; i < n; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
            continue;
        }else{
            ans += '.';
            ans += s[i];
        }
    }

    cout << ans << endl;

    return 0;
}