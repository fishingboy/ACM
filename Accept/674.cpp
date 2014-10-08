#include <iostream>
#include <cstring>

using namespace std;

main()
{
    int i, j;
    long coin[] = {1, 5, 10, 25, 50};
    long n;
    unsigned long a[30001];

    for (i = 0; i <= 30000; i++)
    {
        a[i] = 1;
    }
    for (j = 1; j <= 4; j++)
    {
        for (i = 1; i <= 30000; i++)
        {
            if (i >= coin[j]) a[i] = a[i] + a[i - coin[j]];
        }
    }

    while (cin >> n != NULL)
    {
        cout << a[n] << "\n";
    }
}
