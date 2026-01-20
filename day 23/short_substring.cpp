#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    string b;
    cin >> b;

    string a;
    a += b[0];
    a += b[1];
    for (int i = 3; i < b.size(); i += 2)
        a += b[i];
    cout << a << endl;
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