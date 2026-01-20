#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;
    if (n == 3)
        cout << 3 << endl;
    else
        cout << 2 << endl;
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
        -> kuno ekti range (n) er vetor emn ekti x ber kora jar multiple er sum, oi range er
            moddhe thaka onno sokol number er multiple sum theke beshi.

        etar answer ber korar upay :
            1. n == 3 hole ans = 3
                otherwise ans = 2
*/