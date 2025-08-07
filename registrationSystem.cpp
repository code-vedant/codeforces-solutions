#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;

    map<string,int> registrations;

    while(n--) {
        string name;
        cin >> name;

        if(registrations[name] == 0) {
            cout << "OK" << endl;
        } else {
            cout << name << registrations[name] << endl;
        }
            registrations[name]++;
    }
             
    return 0;
}