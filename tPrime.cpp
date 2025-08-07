#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 1;
vector<bool> isPrime(MAX, true);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX; j += i)
                isPrime[j] = false;
        }
    }
}

bool isTPrime(long long x) {
    long long root = sqrt(x);
    return (root * root == x) && isPrime[root];
}

int main() {
    sieve();

    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;

        if (isTPrime(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
