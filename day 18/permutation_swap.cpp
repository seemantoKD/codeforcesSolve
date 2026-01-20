#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int k = v[0] - 1;
        for (int i = 1; i < n; i++)
            k = __gcd(k, abs(v[i] - (i + 1)));

        cout << k << endl;
    }
    return 0;
}

/*
    learning : 
        -> gcd function diye kivabe array element er gcd ber korte hoy
*/