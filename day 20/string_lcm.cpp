#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    string fs, ss;
    cin >> fs >> ss;

    ll fsl = fs.size();
    ll ssl = ss.size();

    // manually lcm ber kora
    ll mul = fsl * ssl;
    ll g = __gcd(fsl, ssl);
    ll lcm = mul / g;
    
    // built in lcm function diye lcm ber kora
    //ll result = std::lcm(fsl, ssl); // c++ version 17 chara kaj korbe na 

    ll copy1 = lcm / fsl;
    ll copy2 = lcm / ssl;

    string ans1 = "";
    string ans2 = "";

    for (ll i = 1; i <= copy1; i++)
        ans1 += fs;
    for (ll i = 1; i <= copy2; i++)
        ans2 += ss;
    if (ans1 == ans2)
        cout << ans1 << endl;
    else
        cout << -1 << endl;
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
    problem : duita string deya thakbe tader losagu(lcm) ber kore new string create kora
    solving approach :
        1. s and t string er size ber kora
        2. string duitar size er lcm ber kora
        3. string kotobar copy korbo :
            -> lcm / first string size
            -> lcm / second string size
        4. duita diyei ans1 ans2 nam er notun string create korbo
        5. jodi string duita
            -> equal hoy taile jekunu ekta print
            -> otherwise -1 print
*/

/*
    learning :
        -> duita string er lcm ber kore notun string create
*/