#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char cmnd;
    cin >> cmnd;
    string input;
    cin >> input;

    string ans = "";
    for (auto ch : input)
    {
        ll pos = keyboard.find(ch);
        if (cmnd == 'R')
            ans += keyboard[pos - 1];
        else
            ans += keyboard[pos + 1];
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin>>t;

    while (t--)
        seemanto();
    return 0;
}