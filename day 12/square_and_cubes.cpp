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

        vector<int> v;
        for (int i = 1; i * i <= n; i++)
        {
            int temp = i;
            int root = temp * temp;
            v.push_back(root);
        }

        for (int i = 1; i * i * i <= n; i++)
        {
            int temp = i;
            int root = temp * temp * temp;
            v.push_back(root);
        }

        sort(v.begin(), v.end());             // step->1 : sort
        auto it = unique(v.begin(), v.end()); // step->2 : unique
        vector<int> final(v.begin(), it);     // step->3 : push unique another vector

        cout << final.size() << endl;
    }
    return 0;
}

/*
learning :
1`. ekti number square ki na check kora
2. ekti number cube kina check
3. ekti vector theke unique number ber kora
*/