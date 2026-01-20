#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s1 = "YES";

    string s2;

    while (t--)
    {
        cin >> s2;
        for (int i = 0; i < s2.size(); i++)
        {
            s2[i] = toupper(s2[i]);
        }

        if (s1 == s2)
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