#include <bits/stdc++.h>
using namespace std;
                    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
                    
    int t;
    cin >> t;
            
    while(t--){
        string s;
        cin >> s;

        int oneCount = count(s.begin(),s.end(),'1');
        int zeroCount = s.size() - oneCount;


        if(oneCount == zeroCount)
            cout << 0 << endl;
        else{
            for( int i = 0 ; i < s.size() ; i++ ){
                if(s[i] == '0'){
                    if (oneCount)
                    {
                        oneCount--;
                    }else break;
                }else{
                    if (zeroCount)
                    {
                        zeroCount--;
                    }else break;
                    
                }
            }

            cout << zeroCount + oneCount << endl;
        }
    }
            
    return 0;
}