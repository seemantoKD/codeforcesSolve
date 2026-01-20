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
        for (auto &x : v)
            cin >> x;

        int odd = 0;
        for (int i = 0; i < n; i++)
            if (v[i] % 2 == 1)
                odd++;

        if (odd > 0 && odd % 2 != 0)
        {
            long long result = accumulate(v.begin(), v.end(), 0LL); // 0 -> 0LL
            cout << result << endl;
            continue;
        }

        if (odd == 0)
        {
            cout << 0 << endl;
            continue;
        }

        // odd -> even && even ache
        vector<int> temp = v;
        sort(temp.begin(), temp.end(), greater<int>()); // descending order

        long long sum = 0;
        int oddCount = 0;

        bool adding = false; 
        int first = -1;

        for (int i = 0; i < n; i++)
        {
            if (temp[i] % 2 == 1)
            {
                oddCount++;

                if (oddCount % 2 == 1)
                {
                    adding = true;
                    first = i; // প্রথম odd element এর index রাখি
                    sum += temp[i];
                }
                else
                    adding = false;
            }

            else if (adding)
                sum += temp[i];
        }

        // যদি শেষে এসে এখনো adding == true থাকে, তাহলে প্রথম odd এর আগের element গুলোও যোগ করতে হবে
        if (adding && first != -1)
            for (int i = 0; i < first; i++)
                sum += temp[i];

        cout << sum << endl;
    }
    return 0;
}
// incomplete
