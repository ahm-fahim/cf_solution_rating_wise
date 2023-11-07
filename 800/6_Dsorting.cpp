
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
        vector<int> nums(n);

        int diff = 1e9;

        for (int i = 0; i < n; i++)
        {

            cin >> nums[i];
        }

        for (int i = 1; i < n; i++)
        {
            diff = min(diff, nums[i] - nums[i - 1]);
        }
        if (diff < 0)
            cout << 0 << endl;
        else
            cout << diff / 2 + 1 << endl;
    }

    return 0;
}