#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int l, r, d, u;
    while (t--)
    {
        cin >> l >> r >> d >> u;
        if ((l == r) && (d == u) && (l == d) && (r == u))
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}