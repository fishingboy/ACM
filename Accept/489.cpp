#include <iostream>
#include <cstring>

using namespace std;

main()
{
    int i, j, k;
    int round;
    int wrong, right, find;
    int lans, ls;
    char ans[1000];
    char s[1000];

    /*freopen("489.in", "r", stdin);*/
    while (cin >> round)
    {
    	if (round == -1) break;
    	 
        cin >> ans >> s;
        lans = strlen(ans);
        ls = strlen(s);

        wrong = right = 0;
        for (i = 0; i <= ls - 1; i++)
        {
            if (s[i] == '.') continue;

            /* clear same word */
            for (j = i+1; j <= ls - 1; j++)
            {
                if (s[i] == s[j])
                {
                    s[j] = '.';
                }
            }

            /* find */
            find = 0;
            for (j = 0; j <= lans - 1; j++)
            {
                if (s[i] == ans[j])
                {
                    find = 1;
                    right++;
                    ans[j] = '.';
                }
            }

            if (find == 0)         
            {
                wrong++;
                if (wrong >= 7) break;
            }
        }

        cout << "Round " << round << "\n";
        if (right == lans)
            cout << "You win.\n";
        else if (wrong >= 7)
            cout << "You lose.\n";
        else
            cout << "You chickened out.\n";
    }
}
