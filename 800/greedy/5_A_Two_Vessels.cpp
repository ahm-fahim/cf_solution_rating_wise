// https://codeforces.com/problemset/problem/1872/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        cout << ceil((double)(max(a, b) - min(a, b)) / (2 * c)) << "\n";
    }

    return 0;
}