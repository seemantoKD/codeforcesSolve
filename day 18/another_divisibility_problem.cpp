/*
// brute force time limit exceded
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string X;
        cin >> X;
        long long x = stoll(X); // input x

        long long y = 1;

        while (1)
        {
            string Y = to_string(y);
            string XY = X + Y; // changes x -> concatanation of x and y string
            long long xy = stoll(XY);

            if ((xy % (x + y) == 0))
                break;
            else
                y++;
        }
        cout << y << endl;
    }
    return 0;
}
*/

// optimize
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        long long y = 2 * x;
        cout << y << endl;
    }
    return 0;
}