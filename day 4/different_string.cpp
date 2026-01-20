#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    string s;

    while (T--)
    {
        cin >> s;
        string t = s;
        reverse(t.begin(), t.end());
        if (s != t)
        {
            cout << "YES\n";
            cout << t << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}