#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long xK, yK, xQ, yQ;
        cin >> xK >> yK;
        cin >> xQ >> yQ;

        vector<pair<long long, long long>> moves = {
            { a,  b}, { b,  a},
            {-b,  a}, {-a,  b},
            {-a, -b}, {-b, -a},
            { b, -a}, { a, -b}
        };

        set<pair<long long, long long>> kingMoves, queenMoves;

        for (auto [dx, dy] : moves) {
            kingMoves.insert({xK + dx, yK + dy});
            queenMoves.insert({xQ + dx, yQ + dy});
        }

        int count = 0;
        for (auto &pos : kingMoves) {
            if (queenMoves.count(pos)) {
                count++;
            }
        }

        cout << count << '\n';
    }
    return 0;
}
