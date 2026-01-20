#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int c0 = count(s.begin(), s.end(), '0');
        int c1 = count(s.begin(), s.end(), '1');

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (c0 > 0)
                    c0--;
                else
                    break;
            }

            else
            {
                if (c1 > 0)
                    c1--;
                else
                    break;
            }
        }
        cout << c1 + c0 << endl;
    }
    return 0;
}