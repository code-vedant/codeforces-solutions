#include <bits/stdc++.h>
using namespace std;

bool isIncreasing(const vector<int> &arr) {
    for (int i = 0; i < arr.size() - 1 ; i++) {
        if (arr[i] >= arr[i + 1]) return false;
    }
    return true;
}

bool isBelow(const vector<int> &a, const vector<int> &b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= b[i]) return false;
    }
    return true;
}

void operationA(vector<int> &a, vector<pair<int,int>> &ops) {
    for (int i = 0; i < (int)a.size() - 1; i++) {
        if (a[i] > a[i + 1]) {
            swap(a[i], a[i + 1]);
            ops.push_back({1, i + 1});
        }
    }
}

void operationB(vector<int> &b, vector<pair<int,int>> &ops) {
    for (int i = 0; i < (int)b.size() - 1; i++) {
        if (b[i] > b[i + 1]) {
            swap(b[i], b[i + 1]);
            ops.push_back({2, i + 1});
        }
    }
}

void operationC(vector<int> &a, vector<int> &b, vector<pair<int,int>> &ops) {
    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] >= b[i]) {
            swap(a[i], b[i]);
            ops.push_back({3, i + 1});
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<int,int>> ops;

        while (!(isIncreasing(a) && isIncreasing(b) && isBelow(a, b))) {
            operationA(a, ops);
            operationB(b, ops);
            operationC(a, b, ops);

            if (ops.size() > 1709) break;
        }

        cout << ops.size() << endl;
        for (auto &op : ops) {
            cout << op.first << " " << op.second << endl;
        }
    }

    return 0;
}
