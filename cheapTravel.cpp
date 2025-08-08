#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b;

    cin >> n >> m >> a >> b;

    int cost1 = n * a;
    int cost2 = (n / m) * b + (n % m) * a;
    int cost3 = ((n + m - 1) / m) * b;
    
    int cost = min({cost1, cost2, cost3});

    cout << cost << endl;

    return 0;
}