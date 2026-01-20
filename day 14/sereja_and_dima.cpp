#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int s = 0;
    int d = 0;

    int first = 0;
    int last = n - 1;

    int turn = 0;
    while (first <= last)
    {
        if (turn % 2 == 0)
        {
            if (v[first] > v[last])
            {
                s = s + v[first];
                first++;
            }

            else
            {
                s = s + v[last];
                last--;
            }
        }

        else
        {
            if (v[first] > v[last])
            {
                d = d + v[first];
                first++;
            }

            else
            {
                d = d + v[last];
                last--;
            }
        }
        turn++;
    }
    cout << s << " " << d << endl;
    return 0;
}