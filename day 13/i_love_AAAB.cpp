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
        int n = s.size();

        int countA = 0;
        int countB = 0;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                countA++;
            }

            else
            {
                countB++;
            }

            if (countB > countA)
            {
                flag = 0;
                break;
            }
        }

        if (s[0] == 'B' || s[n - 1] == 'A' || flag == 0)
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}