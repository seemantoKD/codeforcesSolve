#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2, s3, s4, s5, s6, s7, s8;
        string s;

        cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;

        vector<string> strings = {s1, s2, s3, s4, s5, s6, s7, s8};

        for (string str : strings)
        {
            for (char ch : str)
            {
                if (ch >= 'a' && ch <= 'z')
                {
                    s.push_back(ch);
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}

/*
// long curt of this same code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2, s3, s4, s5, s6, s7, s8;
        string s;

        cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;

        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] >= 'a' && s1[i] <= 'z')
            {
                s.push_back(s1[i]);
            }
        }

        for (int i = 0; i < s2.size(); i++)
        {
            if (s2[i] >= 'a' && s2[i] <= 'z')
            {
                s.push_back(s2[i]);
            }
        }

        for (int i = 0; i < s3.size(); i++)
        {
            if (s3[i] >= 'a' && s3[i] <= 'z')
            {
                s.push_back(s3[i]);
            }
        }

        for (int i = 0; i < s4.size(); i++)
        {
            if (s4[i] >= 'a' && s4[i] <= 'z')
            {
                s.push_back(s4[i]);
            }
        }

        for (int i = 0; i < s5.size(); i++)
        {
            if (s5[i] >= 'a' && s5[i] <= 'z')
            {
                s.push_back(s5[i]);
            }
        }

        for (int i = 0; i < s6.size(); i++)
        {
            if (s6[i] >= 'a' && s6[i] <= 'z')
            {
                s.push_back(s6[i]);
            }
        }

        for (int i = 0; i < s7.size(); i++)
        {
            if (s7[i] >= 'a' && s7[i] <= 'z')
            {
                s.push_back(s7[i]);
            }
        }

        for (int i = 0; i < s8.size(); i++)
        {
            if (s8[i] >= 'a' && s8[i] <= 'z')
            {
                s.push_back(s8[i]);
            }
        }

        cout << s << endl;
    }

    return 0;
}
*/
