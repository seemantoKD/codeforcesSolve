#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll a, b;
    cin >> a >> b;

    // case 1 : n jodi even hoy tahole even number er largest proper divisor (b) even
    if (b % 2 == 0)
        cout << 2 * b << endl;
    else
        cout << 3 * b << endl;
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
// incomplete 