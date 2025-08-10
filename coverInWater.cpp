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

        int ans = 0;
        int count = 0;

        for (char c : s)
        {
            if (c == '.')
            {
                count++;
            }
            else
            {
                if (count == 1 || count == 2)
                {
                    ans += count;
                }
                else if (count >= 3)
                {
                    ans += 2;
                }
                count = 0;
            }
        }

        if (count == 1 || count == 2)
        {
            ans += count;
        }
        else if (count >= 3)
        {
            ans += 2;
        }

        cout << ans << '\n';
    }
    return 0;
}