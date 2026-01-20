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
        long long temp = n;
        vector<int> digit;
        while (temp != 0)
        {
            int val = temp % 10;
            if (val != 0)
            {
                digit.push_back(val);
            }
            temp /= 10;
        }

        bool flag = true;
        for (long long i = 0; i < digit.size(); i++)
        {
            if (n % digit[i] != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << n << endl;
        }

        else
        {
            long long x = n + 1;
            while (true)
            {
                long long temp1 = x;
                vector<int> digit2;
                while (temp1 != 0)
                {
                    int rem = temp1 % 10;
                    if (rem != 0)
                    {
                        digit2.push_back(rem);
                    }
                    temp1 /= 10;
                }

                bool ans = true;
                for (int i = 0; i < digit2.size(); i++)
                {
                    if (x % digit2[i] != 0)
                    {
                        ans = false;
                        break;
                    }
                }

                if (ans)
                {
                    cout << x << endl;
                    break;
                }

                else
                {
                    x++;
                }
            }
        }
    }
    return 0;
}