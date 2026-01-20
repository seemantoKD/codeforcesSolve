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

        int even = 0;
        int odd = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 1)
            {
                odd++;
            }
        }

        if(odd % 2 == 1)
        {
            cout<<"NO\n";
        }

        else 
        {
            cout<<"YES\n";
        }
    }
    return 0;
}