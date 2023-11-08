/****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****\
 |  Problems! Problems! Problems! I Don't Like It, I Avoid.             |
 |  But Problems Likes Me! I can't Avoid!                               |
 |                                                                      |
 |  A.H.M. Fahim Morshed                                                |
 |                                                                      |
 |  ```Is a competitive programming enthusiast who is deeply            |
 |  passionate about coding. Hailing from Bogura, Bangladesh,           |
 |  his coding journey started at a young age, driven by a              |
 |  fascination for solving intricate problems.                         |
 |                                                                      |
 |  Fahim has excelled in competitive programming, consistently         |
 |  ranking among the top participants in various                       |
 |  contests.Beyond competitions, he shares his                         |
 |  expertise by mentoring and assisting fellow                         |
 |  programmers on online forums.                                       |
 |                                                                      |
 |  His dedication to self-improvement, willingness to embrace new      |
 |  challenges, and effective teamwork make him a valuable              |
 |  asset to any project.                                               |
 |                                                                      |
 |  Fahim's love for coding, combined with his diverse interests,       |
 |  reflects his well-rounded personality, making him an inspiring      |
 |  figure in the programming community at Southeast University.```     |
 |                                                                      |
 |  Github   - ahm-fahim                                                |
 |  Linkedin - https://www.linkedin.com/in/md-fahim-morshed-5b2126233/  |
 |  Gmail    - contactahmfahim@gmail.com                                |
\****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    char a[4][4];
    cin >> T;
    while (T--)
    {
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 46)
                    a[i][j] = i * 10 + j;
            }
        }
        if (a[2][1] == a[2][2] && a[2][1] == a[2][3] || a[1][2] == a[2][2] && a[1][2] == a[3][2] || a[1][1] == a[2][2] && a[1][1] == a[3][3] || a[1][3] == a[2][2] && a[1][3] == a[3][1])
        {
            cout << a[2][2] << "\n";
        }
        else if (a[1][1] == a[2][1] && a[1][1] == a[3][1] || a[1][1] == a[1][2] && a[1][1] == a[1][3])
        {
            cout << a[1][1] << "\n";
        }
        else if (a[3][3] == a[3][2] && a[3][3] == a[3][1] || a[3][3] == a[2][3] && a[3][3] == a[1][3])
        {
            cout << a[3][3] << "\n";
        }
        else
        {
            cout << "DRAW\n";
        }
    }

    return 0;
}
