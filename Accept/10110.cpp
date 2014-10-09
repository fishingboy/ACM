#include <iostream>
#include <cmath>

using namespace std;

main()
{
    unsigned long n;

    while (cin >> n, n != 0)
    {
        if (sqrt(n) == (long) sqrt(n))
            cout << "yes\n";
        else
            cout << "no\n";
    }
}