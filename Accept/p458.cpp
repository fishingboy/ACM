#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

main()
{
    char s[1000];
    char word;
    int i;

    while (gets(s) != NULL)
    {
        if (strlen(s) == 0)
        {
            cout << "\n";
            continue;
        }
        for (i = 0; i <= strlen(s) - 1; i++)
        {
            word = s[i] - 7;
            cout << word;
        }
        cout << "\n";
    }
}