#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);

    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    // longest consecutive in a
    ll ca = 1;
    ll mxa = 1;
    ll vmxa = a[0];
    for (ll i = 1; i < n; i++)
    {
        if (a[i - 1] == a[i])
            ca++;
        else
            ca = 1;
        if (ca > mxa)
        {
            mxa = ca;
            vmxa = a[i];
        }
    }

    // longest consecutive in b
    ll cb = 1;
    ll mxb = 1;
    ll vmxb = b[0];
    for (ll i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
            cb++;
        else
            cb = 1;
        if (cb > mxb)
        {
            mxb = cb;
            vmxb = b[i];
        }
    }

    // case 1 -> a te ache b te o ache
    ll cvmxa = count(b.begin(), b.end(), vmxa);
    ll cvmxb = count(a.begin(), a.end(), vmxb);
    if (mxa >= mxb && cvmxa > 0)
    {
        // vmxa b te ache ki na
        // jodi thake tahole vmxa er max consecutive ber korbo b array teheke
        // thakle ans = mxa + mxcx

        ll x = vmxa;
        ll cx = 0;
        ll mxcx = 0;
        for (ll i = 0; i < b.size(); i++)
        {
            if (b[i] == x)
            {
                cx++;
                mxcx = max(cx, mxcx);
            }
            else
                cx = 0;
        }
        cout << mxa + mxcx << endl;
    }

    // case 2 -> b te o ache a te o ache
    if (mxb > mxa && cvmxb > 0)
    {
        // vmxb a te ache ki na
        // jodi thake tahole vmxb er max consecutive ber korbo a array teheke
        // thakle ans = mxb + mxcx

        ll x = vmxb;
        ll cx = 0;
        ll mxcx = 0;
        for (ll i = 0; i < a.size(); i++)
        {
            if (a[i] == x)
            {
                cx++;
                mxcx = max(cx, mxcx);
            }
            else
                cx = 0;
        }
        cout << mxb + mxcx << endl;
    }
    else
        cout << max(mxa, mxb) << endl;
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