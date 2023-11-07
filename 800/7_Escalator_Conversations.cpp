#include <bits/stdc++.h>
using namespace std;

const int mx = 1e6 + 123;
int persons[mx];

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        for (int i = 1; i <= n; i++)
        {
            cin >> persons[i];
        }

        int result = 0;

        for (int i = 1, j = 1; i <= m , j<=n ; i++, j++)
        {
            result += (H != persons[j]) && abs(H - persons[j]) % k == 0 && abs(H - persons[j]) <= (m - 1) * k;
        }

        cout << result << "\n";
    }

    return 0;
}