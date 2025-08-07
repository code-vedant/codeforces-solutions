#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,a;
    cin >> n >> m >> a;

    int titles = ((n + a - 1) / a) * ((m + a - 1) / a);

        

    cout << titles << endl;        

    return 0;
}