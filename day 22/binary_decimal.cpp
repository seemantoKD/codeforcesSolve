#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;
    vector<ll> v;
    while (n != 0)
    {
        ll digit = n % 10;
        v.push_back(digit);
        n /= 10;
    }
    cout << *max_element(v.begin(), v.end()) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while (t--)
        seemanto();
    return 0;
}