#include <iostream>
#include <cstdio>

using namespace std;

main()
{
    double p, x, y;
    while (cin >> x >> y != NULL)
    {
        if (x < y)
        {
            p = x;
            x = y;
            y = p;
        }
        printf("%.0lf\n", x - y);
   }
}