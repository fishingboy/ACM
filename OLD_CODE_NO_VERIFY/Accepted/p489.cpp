#include <iostream>
#include <cstring>

using namespace std;

main()
{
    int i, j;
    int round;
    int wrong, right;
    int lans, ls;
    char ans[1000];
    char s[1000];

    while (cin >>round, round > 0)
    {
        cin >> ans>>s;
        lans = strlen(ans);
        ls = strlen(s);

        wrong = right = 0;
        for (i = 0; i <= ls - 1; i++)
        {
            for (j = 0; j <= lans - 1; j++)
            {
                if (s[i] == ans[j]) break;
            }
            if (j < lans)
            {
                right++;
                ans[j] = '.';
            }
            else
            {
                wrong++;
                if (wrong >= 7) break;
            }
        }

        cout << "Round " << round << "\n";
        cout << wrong << "   " << right << "\n";
        if (right == ls)
            cout << "You win.\n";
        else if (wrong >= 7)
            cout << "You lose.\n";
        else
            cout << "You chickened out.\n";
    }
}