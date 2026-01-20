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
        int len = s.size();
        int len1 = len / 2;

        string temp1, temp2;
        if (len % 2 == 0)
        {
            for (int i = 0; i < len1; i++)
            {
                temp1.push_back(s[i]);
            }

            for (int i = len1; i < len; i++)
            {
                temp2.push_back(s[i]);
            }

            if (temp1 == temp2)
            {
                cout << "YES\n";
            }

            else
            {
                cout << "NO\n";
            }
        }

        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}