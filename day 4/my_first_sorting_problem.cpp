
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x;
    int y;

    while (t--)
    {
        cin >> x >> y;
        if (x > y)
        {
            swap(x, y);
        }
        cout << x << " " << y << endl;
    }
    return 0;
}