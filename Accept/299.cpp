#include <iostream>

using namespace std;

main()
{
    int n, l;
    int a[50] = {0};
    int nn, i, j, p;
    int total;

    cin >> n;
    for (nn = 1; nn <= n; nn ++)
    {
        cin>>l;
        total = 0;
        for (i = 1; i <= l; i ++)
        {
            cin >> a[i];
        }
        for (i = 1; i <= l; i ++)
        {
            for (j = 1; j <= l - i; j ++)
            {
                if (a[j] > a[j + 1])
                {
                    p = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = p;
                    total ++;
                }
            }
        }
        cout << "Optimal train swapping takes " << total << " swaps.\n";
    }
}
