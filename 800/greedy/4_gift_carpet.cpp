#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;

        vector<string> carpet(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> carpet[i];
        }

        string feat = "vika";
        int like = 0;
        for (int i = 0; i < m; ++i)
        {
            bool check = false;
            for (int j = 0; j < n; ++j)
            {
                if (carpet[j][i] == feat[like])
                {
                    check = true;
                }
            }
            if (check)
            {
                like++;
                if (like == 4)
                {
                    break;
                }
            }
        }
        if (like == 4)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}