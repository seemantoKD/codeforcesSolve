#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    string s;
    while (t--)
    {
        cin >> s;
        string s2 = s;
        sort(s2.begin(), s2.end());
        string temp = s2;
        reverse(temp.begin(), temp.end());

        if (s2 == s && s2 == temp)
        {
            cout << "NO\n";
        }

        else if (s == s2 && s != temp)
        {
            cout << "YES\n";
            cout << temp << endl;
        }

        else
        {
            cout << "YES\n";
            cout << s2 << endl;
        }
    }
    return 0;
}