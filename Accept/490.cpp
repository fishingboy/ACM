#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

main()
{
    char ss[1000];
    char s[11000];
    int st[100];
    int i, j, l;
    int t = 0, max = 0;

    /*freopen("490.in", "r", stdin);*/
    while (gets(ss))
    {
        t++;
        l = strlen(ss);
        for (i = 0; i <= strlen(ss) - 1; i++)
        {
            s[t * 100 + i + 1] = ss[i];
        }
        st[t] = strlen(ss);
        if (strlen(ss) > max) max = strlen(ss);
        if (l == 0) st[t] = 0;
    }

    for (i = 0; i <= max - 1; i++)
    {
        for (j = t; j >= 1; j--)
        {
            if (i >= st[j])
                cout << " ";
            else
                cout << s[j * 100 + i + 1];
        }
        cout << "\n";
    }
}
