#include <iostream>

using namespace std;

long long int nCr(long long int n, long long int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }
    else if (r == 1)
    {
        return n;
    }
    else
    {
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}

main()
{
    long long int n, m;
    while (cin >> n >> m)
    {
        cout << nCr(n, m) << endl;
    }
}
