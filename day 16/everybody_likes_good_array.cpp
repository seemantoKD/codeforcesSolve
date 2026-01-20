#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool samepermutation = false;
        for (int i = 0; i < n - 1; i++)
        {
            if ((v[i] % 2) == (v[i + 1] % 2))
            {
                samepermutation = true;
                break;
            }
        }

        if (!samepermutation)
        {
            cout << 0 << endl;
            continue;
        }

        vector<int> even;
        vector<int> odd;

        int ce = 0;
        int co = 0;

        // even segment
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                ce++;
            }

            else
            {
                if (ce > 0)
                {
                    even.push_back(ce - 1);
                }
                ce = 0;
            }
        }

        if (ce > 0)
        {
            even.push_back(ce - 1);
        }

        // odd segment
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 1)
            {
                co++;
            }

            else
            {
                if (co > 0)
                {
                    odd.push_back(co - 1);
                }
                co = 0;
            }
        }
        if (co > 0)
        {
            odd.push_back(co - 1);
        }

        int r1 = accumulate(even.begin(), even.end(), 0);
        int r2 = accumulate(odd.begin(), odd.end(), 0);
        int op = r1 + r2;
        cout << op << endl;
    }
    return 0;
}

/*
    learning :
        -> sequentially kunu kichu kotobar asche seta count kora
*/