// https://codeforces.com/contest/514/problem/A  
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[25];
    long long n;

    cin >> n;

    int cnt = 0;
    while (n > 0)
    {
        a[cnt++] = n % 10;
        n /= 10;
    }

    for (int i = 0, j = cnt - 1; i < j;i++,j--){
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }

    int tmp = a[0];

    for (int i = 0; i < cnt; i++){
        int rev = 9 - a[i];

        if(rev < a[i]){
            a[i] = rev;
        }
    }

    if(a[0]==0){
        a[0] = tmp;
    }

    for (int i = 0; i < cnt; i++){
        cout << a[i];
    }

    return 0;
}