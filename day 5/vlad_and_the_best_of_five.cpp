#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        int count_A = 0;
        int count_B = 0;

        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                count_A++;
            }

            else
            {
                count_B++;
            }
        }

        if (count_A > count_B)
        {
            cout << "A\n";
        }

        else
        {
            cout << "B\n";
        }
    }
    return 0;
}