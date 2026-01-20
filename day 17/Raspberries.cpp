#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        if (k == 2)
        {
            bool even = false;
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 == 0)
                {
                    even = true;
                    break;
                }
            }
            if (even)
            {
                cout << 0 << endl;
                continue;
            }

            else
            {
                cout << 1 << endl;
                continue;
            }
        }

        else if (k == 3)
        {
            bool m3 = false;
            int mn_op = INT_MAX;

            for (int i = 0; i < n; i++)
            {
                if (v[i] % 3 == 0)
                {
                    m3 = true;
                    break;
                }

                else
                {
                    int op = (3 - (v[i] % 3)) % 3;
                    mn_op = min(mn_op, op);
                }
            }

            if (m3)
            {
                cout << 0 << endl;
                continue;
            }
            else
            {
                cout << mn_op << endl;
                continue;
            }
        }

        else if (k == 5)
        {
            bool m5 = false;
            int mn_op = INT_MAX;

            for (int i = 0; i < n; i++)
            {
                if (v[i] % 5 == 0)
                {
                    m5 = true;
                    break;
                }

                else
                {
                    int op = (5 - (v[i] % 5)) % 5;
                    mn_op = min(mn_op, op);
                }
            }

            if (m5)
            {
                cout << 0 << endl;
                continue;
            }
            else
            {
                cout << mn_op << endl;
                continue;
            }
        }

        else
        {
            int even1 = 0;

            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 == 0)
                    even1++;
            }

            int mn_op = INT_MAX;
            bool m4 = false;

            for (int i = 0; i < n; i++)
            {
                if (v[i] % 4 == 0)
                {
                    m4 = true;
                    mn_op = 0;
                }
                else
                {
                    int op = (4 - (v[i] % 4)) % 4; // কতবার ai কে ১ করে বাড়াতে হবে যেন সেটা 4 দ্বারা ভাগশেষশূন্য হয়
                    mn_op = min(mn_op, op);
                }
            }

            if (m4 || even1 >= 2)
                cout << 0 << endl;
            else if (m4 || even1 == 1)
                cout << min(mn_op, 1) << endl;
            else if (m4 || even1 == 0)
                cout << min(mn_op, 2) << endl;
            else
                cout << mn_op << endl;
        }
    }
    return 0;
}

/*
learning :
    -> Product divisible by k এর জন্য condition
        1. k prime হলে (যেমন 2,3,5) → একটি element k diye divisible holei hoy

        2. k prime na hole
            -> prothome check korte hoy prime er moto then check korte hoy even
            else block ta bujba valo kore
*/