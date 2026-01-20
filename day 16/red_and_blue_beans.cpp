#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long r, b, d;
        cin >> r >> b >> d;

        // case -> 1 : r > b
        if (r > b)
        {
            long long rmx = b * (d + 1);
            if (r > rmx)
            {
                cout << "NO\n";
            }

            else
            {
                cout << "YES\n";
            }
        }

        // case -> 2 : b > r
        else if (b > r)
        {
            long long bmx = r * (d + 1);
            if (b > bmx)
            {
                cout << "NO\n";
            }

            else
            {
                cout << "YES\n";
            }
        }

        // case -> 3 : r == b
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}