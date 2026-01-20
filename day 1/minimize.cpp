#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int a, b, c;

    while (t--)
    {
        cin >> a >> b;
        c = a - b;
        c = abs(c);
        cout << c << endl;
    }
}
