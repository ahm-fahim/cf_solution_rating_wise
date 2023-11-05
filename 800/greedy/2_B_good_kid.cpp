#include <bits/stdc++.h>
using namespace std;

const int mx = 1e4 + 123;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[mx];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        arr[0] += 1;

        int ans = 1;

        for (int i = 0; i < n; i++)
        {
            ans *= arr[i];
        }

        cout << ans << "\n";
    }

    return 0;
}