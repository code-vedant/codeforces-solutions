#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int gtrFlow = 0, maxGtr = 0;
        int smlFlow = 0, maxSml = 0;

        for (char c : s)
        {
            if (c == '<')
            {
                gtrFlow++;
                maxGtr = max(maxGtr, gtrFlow);
            }
            else
            {
                gtrFlow = 0;
            }

            if (c == '>')
            {
                smlFlow++;
                maxSml = max(maxSml, smlFlow);
            }
            else
            {
                smlFlow = 0;
            }
        }

        cout << max(maxSml, maxGtr) + 1 << "\n";
    }

    return 0;
}