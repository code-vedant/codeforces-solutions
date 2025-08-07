#include <bits/stdc++.h>
using namespace std;
int main() {
    int m;
    cin >> m;

    if (m == 0) {
        cout << "0" << endl;
        return 0;
    }

    int count = 0;

    while(m > 0){
        if(m >= 100){
            count++;
            m -= 100;
        }else if(m >= 20){
            count++;
            m -= 20;
        } else if(m >= 10){
            count++;
            m -= 10;
        } else if(m >= 5){
            count++;
            m -= 5;
        }
        else if(m >= 1){
            count++;
            m -= 1;
        }
    }

    cout << count << endl;
             
    return 0;
}