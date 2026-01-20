#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int a, b;
    while (t--)
    {
        cin >> a >> b;
        if (a == 0)
        {
            cout << 1 << endl;
        }

        else if (b == 0)
        {
            cout << a + 1 << endl;
        }

        else
        {
            int result = a + (2 * b) + 1;
            cout << result << endl;
        }
    }
    return 0;
}