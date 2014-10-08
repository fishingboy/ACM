#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void prix(int x)
{
    if (x != 1 && x != -1) cout << fabs(x);
}

void prif(int x)
{
    if (x > 0)
        cout << " + ";
    else
        cout << " - ";
}

void prib(int b)
{
    if (b > 1) cout << "^" << b;
}

void print(int x, int b)
{
    prif(x);
    if (x != 0) prix(x);
    cout << "x";
    prib(b);
}

main()
{
    int x;
    int i;
    int f;

    while (cin >> x != NULL)
    {
        f = 0;
        if (x != 0)
        {
            if (fabs(x) != 1) cout << x;
            if (x == -1) cout << "-";
            cout << "x^8";
            f = 1;
        }

        for (i = 7; i >= 0; i--)
        {
            cin >>x;
            if (i == 0)
            {
                if (f == 0)
                {
                    cout << x;
                    f = 1;
                    break;
                }
                if (x != 0)
                {
                    prif(x);
                    cout << fabs(x);
                    break;
                }
            }
            if (f == 0 && x != 0)
            {
                if (fabs(x) != 1) cout << x;
                if (x == -1) cout << "-";
                cout << "x";
                prib(i);
                f = 1;
            }
            else
            {
                if (x != 0) print(x, i);
            }
        }
        if (f == 0) cout << 0;
        cout << "\n";
    }
}