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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + v[i];
        }

        if (sum % 2 == 0)
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

/*
learning :

even number hoilei ekmatro kunu kichuke duiti same parity dara represent kora jay
    example : even + even ->even
            odd + odd -> even

        but odd ke evabe duita same parity diye prokas kora jay na
        example : odd + even -> odd (different parity)

*/