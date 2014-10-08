#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

char s[130];

void xx(int j, int l)
{
    int i;
    for (i = j; i <= l; i++)
    {
        s[i] = s[i + 2];
    }
    s[l - 2] = 0;
    return;
}

main()
{
    int n, i, j;
    int l;
    char a[30];
    gets(a);
    n = atoi(a);

    for (i = 1; i <= n; i++)
    {
        s[0] = 0;
        gets(s);
        l = strlen(s);
        if (l % 2 != 0)
        {
            cout << "No\n";
            continue;
        }

        while (l >= 0)
        {
            l = strlen(s);
            if (l == 0)
            {
                cout << "Yes\n";
                break;
            }
            for (j = 0; j < l; j++)
            {
                if (s[j] == '(' && s[j + 1] == ')')
                {
                    xx(j, l);
                    break;
                }
                if (s[j] == '[' && s[j + 1] == ']')
                {
                    xx(j, l);
                    break;
                }
            }
            if (j >= l)
            {
                cout << "No\n";
                break;
            }
        }
    }
}