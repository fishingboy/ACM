#include <iostream>

using namespace std;

int main()
{
    long long int i, a, b, l;
    cin >> l;
    for (i = 1; i <= l; i ++)
    {
        cin >> a >> b;
        if (a == b)
        {
            cout << "=\n";
        }
        else
        {
            if (a > b)
            {
                cout << ">\n";
            }
            else
            {
                cout << "<\n";
            }
        }
    }
    return 0;
}