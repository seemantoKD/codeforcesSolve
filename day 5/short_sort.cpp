#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    string s1;

    while (t--)
    {
        int count = 0;
        string s = "abc";
        cin >> s1;
        if (s1 == s)
        {
            cout << "YES\n";
        }

        else
        {
            for (int i = 0; i < 3; i++)
            {
                if (s[i] != s1[i])
                {
                    count++;
                }
            }

            if (count <= 2)
            {
                cout << "YES\n";
            }

            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}