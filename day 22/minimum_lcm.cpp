#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;

    bool prime = true;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (n % 2 == 0)
        cout << n / 2 << ' ' << n / 2 << endl;
    else
    {
        if (prime)
            cout << 1 << ' ' << n - 1 << endl;
        else
        {
            for (ll i = 3; i * i <= n; i += 2)
            {
                if (n % i == 0)
                {
                    cout << n / i << ' ' << n - n / i << endl;
                    break;
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
        seemanto();
    return 0;
}

/*
    learning : 
        -> suppose n = a + b where a and b is the divisor of n(a is the smallest divisor of n) . we need find the a and 
            b such that lcm(a,b) minimum . 

        2 options 
        1. n = even
        2. n = odd 
            subcase 1 : n prime 
            subcase 2 : n not prime
*/