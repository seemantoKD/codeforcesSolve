#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    long long n;
    while (t--)
    {
        cin >> n;
        long long result = (n / 15) * 3;

        // case -> 1 : n 15 diye vag gele
        if (n % 15 == 0)
        {
            cout << result + 1 << endl;
        }

        //case -> 2 : jodi kichu obosisto thake tahole seta extra hisebe result e add korbo
        else 
        {
            long long rem = n % 15;
            long long extra = 0;

            for (int i = 0; i <= rem; i++)
            {
                if ((i % 3) == (i % 5))
                {
                    extra++;
                }
            }
            cout << result + extra << endl;
        }
    }
    return 0;
}