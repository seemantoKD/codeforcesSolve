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

        int r = 0;

        long long n = stoll(s);
        if (n % 25 == 0)
        {
            cout << r << endl;
            continue;
        }

        vector<int> op;

        int c0 = count(s.begin(), s.end(), '0');
        int c2 = count(s.begin(), s.end(), '2');
        int c5 = count(s.begin(), s.end(), '5');
        int c7 = count(s.begin(), s.end(), '7');

        if (c0 >= 2)
        {
            int r1 = 0, r2 = 0;
            int pos1, pos2;
            for (int i = s.size() - 1; i >= 0; i--) // searching last digit 0
            {
                if (s[i] == '0')
                {
                    pos1 = i;
                    break;
                }

                else
                {
                    r1++;
                }
            }

            for (int i = pos1 - 1; i >= 0; i--) // searching second last digit 0
            {
                if (s[i] == '0')
                {
                    pos2 = i;
                    break;
                }

                else
                {
                    r2++;
                }
            }

            int op1 = r1 + r2;
            op.push_back(op1);
        }

        if (c2 >= 1 && c5 >= 1)
        {
            int r1 = 0, r2 = 0;
            int pos1, pos2;
            for (int i = s.size() - 1; i >= 0; i--) // searching last digit 5
            {
                if (s[i] == '5')
                {
                    pos1 = i;
                    break;
                }

                else
                {
                    r1++;
                }
            }

            for (int i = pos1 - 1; i >= 0; i--) // searching second last digit 2
            {
                if (s[i] == '2')
                {
                    pos2 = i;
                    break;
                }

                else
                {
                    r2++;
                }
            }

            int op2 = r1 + r2;
            op.push_back(op2);
        }

        if (c0 >= 1 && c5 >= 1)
        {
            int r1 = 0, r2 = 0;
            int pos1, pos2;
            for (int i = s.size() - 1; i >= 0; i--) // searching last digit 0
            {
                if (s[i] == '0')
                {
                    pos1 = i;
                    break;
                }

                else
                {
                    r1++;
                }
            }

            for (int i = pos1 - 1; i >= 0; i--) // searching second last digit 5
            {
                if (s[i] == '5')
                {
                    pos2 = i;
                    break;
                }

                else
                {
                    r2++;
                }
            }

            int op3 = r1 + r2;
            op.push_back(op3);
        }

        if (c7 >= 1 && c5 >= 1)
        {
            int r1 = 0, r2 = 0;
            int pos1, pos2;
            for (int i = s.size() - 1; i >= 0; i--) // searching last digit 5
            {
                if (s[i] == '5')
                {
                    pos1 = i;
                    break;
                }

                else
                {
                    r1++;
                }
            }

            for (int i = pos1 - 1; i >= 0; i--) // searching second last digit 7
            {
                if (s[i] == '7')
                {
                    pos2 = i;
                    break;
                }

                else
                {
                    r2++;
                }
            }

            int op4 = r1 + r2;
            op.push_back(op4);
        }
        int ans = *min_element(op.begin(), op.end());
        cout << ans << endl;
    }
    return 0;
}