#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a, b;

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a >> b;

            if (a>b)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}