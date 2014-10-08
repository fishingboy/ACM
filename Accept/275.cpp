#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int m[10000];
    int dig[10000];
    int ans;
    int x, y;
    int i, j, t, tt;
    int find, f;

    while (cin >> x >> y, y != 0)
    {

        cout << ".";
        f = find = t = 0;
        tt = 1;
        ans = (int) x / y;
        x = (x % y) * 10;
        if (x == 0)
        {
           find = 1;
           f = 1;
        } 

        while (find == 0)
        {
            t++;
            m[t] = x;
            dig[t] = (int) x / y;
            x = (x % y) *10;
            if (x == 0)
            {
                f = 1;
                for (i = 1; i <= t; i++)
                {
                    tt++;
                    cout << dig[i];
                    if (tt > 1 && tt % 50 == 0) cout << "\n";
                }
                break;
            }
            for (i = 1; i <= t - 1; i++)
            {
                if (m[i] == m[t])
                {
                    find = 1;
                    for (j = 1; j <= t - 1; j++)
                    {
                        tt++;
                        if (tt > 1 && tt % 50 == 1) cout << "\n";
                        cout << dig[j];
                    }

                    break;
                }
            }

        }
        cout << "\n";
        if (f == 1)
            cout << "This expansion terminates.\n\n";
        else
            printf("The last %d digits repeat forever.\n\n", t - i);
    }
    return 0;
}
