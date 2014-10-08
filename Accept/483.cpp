#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void p(char s[1000])
{
    int i, l;
    l = strlen(s);
    for (i = l - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}

int main()
{
    char *ss;
    char str[1000];

    while (gets(str))
    {
        ss = strtok(str, " ");
        p(ss);
        while (ss = strtok(NULL, " "))
        {
            cout << " ";
            p(ss);
        }
        cout << "\n";
    }
    return 0;
}
