#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> a(n+1);

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int>even,odd;

    for(int i = 1; i <= n; i++) {
        if(a[i] % 2 == 0) {
            even.push_back(i);
        } else {
            odd.push_back(i);
        }
    }

    if(even.size() == 1)
        cout << even[0] << endl;
    else
        cout << odd[0] << endl;    
    
             
    return 0;
}