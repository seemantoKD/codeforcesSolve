#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;

        long long n2 = 2 * n;
        long long min_sum = k * (k + 1) / 2;
        long long max_sum = k * (n2 - k + 1) / 2;

        if (x > max_sum || x < min_sum)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}

/*
formula : k ti number er
    1. min_sum = k*(k+1)/2
    2. max_sum = k*(2 *n - k+1)/2 // n -> range er vitor sobceye boro number
    3. odd number er min_sum = k * k
    4. even number er min_sum = k(k+1)
*/