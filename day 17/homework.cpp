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

        string a;
        cin >> a;

        int m;
        cin>>m;
        string b, c;
        cin >> b;
        cin >> c;

        for (int i = 0; i < c.size(); i++)
        {
            if (c[i] == 'V')
            {
                a = b[i] + a;
            }

            else
            {
                a = a + b[i];
            }
        }
        cout << a << endl;
    }
    return 0;
}
