//https://codeforces.com/problemset/problem/1829/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    string oj = "codeforces";

    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int notMatch = 0;
        for (int i = 0; i < s.length(); i++) {
            if (oj[i] != s[i]) {
                notMatch += 1;
            }
        }
        cout << notMatch << "\n";
    }
    
    return 0;
}
