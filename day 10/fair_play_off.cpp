#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> v(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> v[i];
        }

        vector<int> temp;
        temp = v;
        sort(temp.begin(), temp.end());
        int mx1 = temp[3];
        int mx2 = temp[2];

        int winner1, winner2;
        if (v[0] > v[1])
        {
            winner1 = v[0];
        }

        else
        {
            winner1 = v[1];
        }

        if (v[2] > v[3])
        {
            winner2 = v[2];
        }

        else
        {
            winner2 = v[3];
        }

        if ((winner1 == mx1 || winner1 == mx2) && (winner2 == mx2 || winner2 == mx1))
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}