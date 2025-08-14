#include <bits/stdc++.h>
using namespace std;
                    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
                    
    vector<vector<int>> grid(5, vector<int>(5, 0));

    int x , y;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> grid[i][j];
            if(grid[i][j] != 0){
                x = i;
                y = j;
            }
        }
    }

    cout << abs(x - 2) + abs(y - 2);
            
    return 0;
}