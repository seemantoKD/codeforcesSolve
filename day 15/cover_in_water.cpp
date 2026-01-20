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
        cin >> n >> s;
        int sdot = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                sdot++;
                if (sdot == 3)
                {
                    break;
                }
            }

            else
            {
                sdot = 0;
            }
        }

        int dcount = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                dcount++;
            }
        }

        if (sdot == 3)
        {
            cout << 2 << endl;
        }

        else
        {
            cout << dcount << endl;
        }
    }
    return 0;
}

/*
learning : 
-> kuno specific character darabahik vabe koto bar eseche ta count kora shikhlam
*/