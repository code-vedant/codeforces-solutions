#include <bits/stdc++.h>
using namespace std;
int main() {
             
    string m = "hello";

    string s;
    cin >> s;

    int pt1 = 0;
    int pt2 = 0;

    while(m.size() > pt1 && s.size() > pt2) {
        if(s[pt2] == m[pt1]){
            pt1++;
            pt2++;
        }
        else {
            pt2++;
        }
    }

    if(pt1 == m.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }



    return 0;
}