#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n, t;
        cin >> n >> t;

        vector<int> durations(100);
        vector<int> entertainment(100);

        for (int i = 1; i <= n; i++)
        {
            cin >> durations[i];
        }

        for (int i = 1; i <= n; i++)
        {
            cin >> entertainment[i];
        }

        int maxEntertainment = -1;
        int selectedVideo = -1;

        for (int i = 1; i <= n; i++)
        {
            if (durations[i] + i - 1 <= t)
            {
                if (entertainment[i] > maxEntertainment)
                {
                    maxEntertainment = entertainment[i];
                    selectedVideo = i;
                }
            }
        }

        cout << selectedVideo << "\n";
    }

    return 0;
}
