// https://codeforces.com/problemset/problem/304/A
#include <bits/stdc++.h>
using namespace std;

const int mx = 1e8 + 123;
bool vis[mx];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        vis[i * i] = 1;
    }

    int ans = 0;

    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b <= n; b++)
        {
            int d = (a * a) + (b * b);
            if (d >= mx)
            {
                break;
            }
            if (vis[d])
            {
                ans++;
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
