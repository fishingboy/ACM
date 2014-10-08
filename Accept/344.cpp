#include <iostream>
#include <cstring>

using namespace std;

char bb1[][5] = {"", "i", "ii", "iii", "iv", "v", "vi", "vii", "viii", "ix"};
char bb2[][5] = {"", "x", "xx", "xxx", "xl", "l", "lx", "lxx", "lxxx", "xc"};
int sum[4] = {0};

void add(int n)
{
    int i, j, l;
    int b1, b10, b100;
    char m;
    if (n == 100)
        sum[4] ++;
    else
    {
        b10 = (int) n / 10;
        b1 = n % 10;
        l = strlen(bb1[b1]);

        for (i = 0; i <= l - 1; i ++)
        {
            m = bb1[b1][i];
            if (m == 'i') sum[0] ++;
            if (m == 'v') sum[1] ++;
            if (m == 'x') sum[2] ++;
            if (m == 'l') sum[3] ++;
            if (m == 'c') sum[4] ++;
        }

        l = strlen(bb2[b10]);

        for (i = 0; i <= l - 1; i ++)
        {
            m = bb2[b10][i];
            if (m == 'i') sum[0] ++;
            if (m == 'v') sum[1] ++;
            if (m == 'x') sum[2] ++;
            if (m == 'l') sum[3] ++;
            if (m == 'c') sum[4] ++;
        }

    }
}

main()
{
    int i, j, n;
    char s[] = "ivxlc";

    while (cin >> n, n != 0)
    {
        cout << n << ": ";

        for (i = 0; i <= 4; i ++)
        {
            sum[i] = 0;
        }

        for (i = 1; i <= n; i ++)
        {
            add(i);
        }

        for (i = 0; i <= 4; i ++)
        {
            cout << sum[i] << " " << s[i];
            if (i != 4) cout << ", ";
        }
        cout << "\n";
    }
}