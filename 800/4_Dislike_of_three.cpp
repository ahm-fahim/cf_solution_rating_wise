#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        int cnt = 0;
        int i = 1;

        while (1)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                cnt++;
            }
            if (cnt == k)
            {
                cout << i << "\n";
                break;
            }
            i++;
        }

    }
    return 0;
}