#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int even = 0, odd = 0;
        int eveni = 0, oddi = 0;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != i % 2)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << 0 << endl;
        }

        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 != v[i] % 2)
                {
                    if (v[i] % 2 == 0)
                    {
                        even++;
                    }

                    else if (v[i] % 2 == 1)
                    {
                        odd++;
                    }
                }
            }

            if (even == odd)
            {
                cout << even << endl;
            }

            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}