#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        for(int i = 0 ; i+2 < n ; i++){
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                flag=true;
                break;
            }
        }
        if(flag)
            cout << 2 << endl;
        else{
            int count = 0;
            for(int i = 0 ; i < n ; i++){
                if(s[i] == '.') count++;
            }
            cout << count << endl;
        }    
    }
    return 0;
}