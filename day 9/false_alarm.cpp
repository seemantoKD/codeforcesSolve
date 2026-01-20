#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n, k;
    while (t--)
    {
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int initial = -1, final = -1;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 1)
            {
                if (initial == -1)
                {
                    initial = i; // 1 prothombar ache ei index e
                }
                final = i; // 1 last bar ache ei index e
            }
        }

        int count = 0;
        // if (initial != -1)
        // {
        //     count = final - initial + 1;
        // }

        if (initial != -1)
        {
            for (int i = initial; i <= final; i++)
            {
                count++;
            }
        }

        if (count <= k)
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

/*
learning :
-> array te kuno ekti specific value pawar por theke jekunu input aslei count er value
increase korbo jotokkon na oi specific value last time array te ase.
*/