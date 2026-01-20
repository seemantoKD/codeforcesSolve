#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int start, end;
        cin >> start >> end;

        vector<int> prime;
        vector<int> fibo;
        vector<int> final;

        for (int i = start; i <= end; i++)
        {
            if (i < 2)
            {
                continue;
            }

            int flag = 1;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
            {
                prime.push_back(i);
            }
        }

        int first = 0;
        int second = 1;

        while (first <= end)
        {
            if (first >= start)
            {
                fibo.push_back(first);
            }

            int fibonacci = first + second;
            first = second;
            second = fibonacci;
        }

        for (int i = 0; i < prime.size(); i++)
        {
            if (find(fibo.begin(), fibo.end(), prime[i]) == fibo.end())
            {
                final.push_back(prime[i]);
            }
        }

        for (int i = 0; i < fibo.size(); i++)
        {
            if (find(prime.begin(), prime.end(), fibo[i]) == prime.end())
            {
                final.push_back(fibo[i]);
            }
        }

        sort(final.begin(), final.end());
        final.erase(unique(final.begin(), final.end()), final.end());

        cout << final.size() << endl;
    }

    return 0;
}