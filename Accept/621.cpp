#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

main()
{
    long i, n;
    int len;
    char s[1000];
    
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> s;
        len = strlen(s);
        if (strcmp("1", s) == 0 || strcmp("4", s) == 0 || strcmp("78", s) == 0)
        {
            cout << "+\n";
        }
        else if (s[len - 2] == '3' && s[len - 1] == '5')
        {
            cout << "-\n";
        }
        else if (s[0] == '9' && s[len - 1] == '4')
        {
            cout << "*\n";
        }
        else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
        {
            cout << "?\n";
        }
    }
}