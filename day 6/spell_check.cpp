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
        int flag = 1;

        if (n != 5)
        {
            flag = 0;
        }

        else
        {
            sort(s.begin(), s.end());
            if (s != "Timru")
            {
                flag = 0;
            }
        }

        if (flag == 1)
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