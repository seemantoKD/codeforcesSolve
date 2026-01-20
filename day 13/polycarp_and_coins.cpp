#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    while (t--)
    {
        cin >> n;
        int part = (n + 1) / 3;
        int b = 2 * part;
        cout << n - b << " " << part << endl;
    }
    return 0;
}