
// https://codeforces.com/problemset/problem/320/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    string number;
    cin >> number;
    bool flag = true;

    if (number[0] != '1') {
        flag = false;
    } else {
        int countFour = 0;

        for (int i = 0; i < number.length(); i++) {
            if (number[i] == '1') {
                countFour = 0;
            } else if (number[i] == '4') {
                countFour++;
                if (countFour >= 3) {
                    flag = false;
                    break;
                }
            } else {
                flag = false;
                break;
            }
        }
    }

    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}