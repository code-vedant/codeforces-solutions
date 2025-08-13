#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        long long a, b;
        int n;
        cin >> a >> b >> n;

        vector<long long> tools(n);
        for (int i = 0; i < n; i++) {
            cin >> tools[i];
        }

        sort(tools.rbegin(), tools.rend());

        long long timer = b;
        long long time = 0;
        int index = 0;

        while (timer > 0) {
            time++;

            if (index < n && timer < a) {
                timer = min(a, timer + tools[index]);
                index++;
            }
            timer--;
        }

        cout << time << "\n";
    }

    return 0;
}
