// https://codeforces.com/problemset/problem/1873/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string card;
        cin >> card;

        (card == "bca" || card == "cab") ? cout << "NO\n" : cout << "YES\n";
    }
    return 0;
}