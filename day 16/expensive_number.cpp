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

        // case 1 : only one digit
        if (s.size() == 1)
        {
            cout << 0 << endl;
        }

        // case 2 :
        else
        {
            // step -> 1 : last theke prothom non zero digit store kora ans namok variable e
            // step->2 :number theke j digit ta store korlam se digit er age kotogula non zero ache ta count kora
            // step->3 : digit er pore j digit ache ta count kora

            int num = -1; // last nonzero number
            int pos = -1;
            int count_prev = 0;
            int count_next = 0;
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] != '0')
                {
                    num = s[i] - '0';
                    pos = i;
                    break;
                }
            }

            // count prev
            for (int i = 0; i < pos; i++)
            {
                if (s[i] != '0')
                {
                    count_prev++;
                }
            }

            // count_next
            for (int i = pos + 1; i < s.size(); i++)
            {
                count_next++;
            }

            cout << count_next + count_prev << endl;
        }
    }
    return 0;
}