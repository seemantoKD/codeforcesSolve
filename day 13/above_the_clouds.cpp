#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;

        if (n < 3)
        {
            cout << "NO\n";
            continue;
        }

        string a1 = s.substr(0, 1);
        string b1 = s.substr(1, n - 2);
        string c1 = s.substr(n - 1, 1);

        string a2 = s.substr(0, n - 2);
        string b2 = s.substr(n - 2, 1);
        string c2 = s.substr(n - 1, 1);

        string ac1 = a1 + c1;
        string ac2 = a2 + c2;

        if (ac1.find(b1) != string ::npos && b1.size() > 0)
        {
            cout << "YES\n";
        }

        else if (ac2.find(b2) != string ::npos && b2.size() > 0)
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