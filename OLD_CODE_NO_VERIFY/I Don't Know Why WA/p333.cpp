#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

void trim(char *str)
{
    int i, length;
    
    /* left trim */
    length = strlen(str);
    for (i = 0; i <= length - 1; i++)
    {
        if (str[i] != ' ') break;
    }
    strncpy(str, str + i, length - i);
    str[length - i] = 0;
    
    /* right trim */
    length = strlen(str);
    for (i = length - 1; i >= 0; i--)
    {
        if (str[i] != ' ') break;
    }    
    str[i+1] = 0;        
}

int iscorrect(char *id)
{
    int i;
    int t = 0;
    int sum[10] = {0};
    char m;

    for (i = 0; i <= strlen(id) - 1; i++)
    {
        m = id[i];
        if (isdigit(m) != 0)
        {
            t++;
            if (t > 10) break;
            sum[t] = m - '0';
        }
        else if (m == 'X')
        {
            t++;
            if (t != 10) break;
            sum[t] = 10;
        }
        else if (m != '-' && m != ' ')
        {
        	t = 0;
        	break;
        }
    }

    if (t != 10)
    {
        trim(id);
        cout << id;
        cout << " is incorrect.\n";
    }
    else
    {
        for (i = 2; i <= 10; i++)
        {
            sum[i] += sum[i - 1];
        }
        for (i = 2; i <= 10; i++)
        {
            sum[i] += sum[i - 1];
        }
        trim(id);

		cout << id;
        if (sum[10] % 11 == 0)
            cout << " is correct.\n";
        else
            cout << " is incorrect.\n";
    }
    return 0;
}

main()
{
    char id[1000];

	
		freopen("333.in", "r", stdin);
		freopen("333.out", "w", stdout);
	

    while (gets(id))
    {
        iscorrect(id);
    }
}
