#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int last;
    int i, j, k;
    int p, n, l;
    char s[100];

    while (scanf("%s", s) && s[0] != '#')
    {
        last = strlen(s) - 1;
        l = strlen(s) - 1;
        for (n = 0; n < last; n++)
        {
            last = last - n;
            for (i = last; i >= 0; i--)
            {
                if (s[i] < s[last]) break;
            }
            if (i >= 0) break;
        }

        if (i < 0 || last == 0)
        {
            cout << "No Successor\n";
        }
        else
        {
            p = s[last];
            s[last] = s[i];
            s[i] = p;

            for (j = i + 1; j <= l - 1; j++)
            {
                for (k = j + 1; k <= l; k++)
                {
                    if (s[j] > s[k])
                    {
                        p = s[j];
                        s[j] = s[k];
                        s[k] = p;
                    }
                }
            }
            cout << s << "\n";
        }
    }
    return 0;
}
