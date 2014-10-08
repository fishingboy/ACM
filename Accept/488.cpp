#include <iostream>

using namespace std;

int main()
{
    int n, nn;
    int x, y;
    int i, j, k;
    cin >>n;

    for (nn = 1; nn <= n; nn++)
    {
        cin >> x>>y;
        for (i = 1; i <= y; i++)
        {

            for (j = 1; j <= x; j++)
            {
                for (k = 1; k <= j; k++)
                {
                    cout << j;
                }
                cout << "\n";
            }

            for (j = x - 1; j > 0; j--)
            {
                for (k = 1; k <= j; k++)
                {
                    cout << j;
                }
                cout << "\n";
            }
            if (i != y)cout << "\n";
        }
        if (nn != n)cout << "\n";
    }
    return 0;
}