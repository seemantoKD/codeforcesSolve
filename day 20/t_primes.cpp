// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// using ll = long long int;

// void seemanto()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         set<ll> s;
//         ll x;
//         cin >> x;

//         for (ll i = 1; i * i <= x; i++)
//         {
//             if (x % i == 0)
//             {
//                 s.insert(i);
//                 if (i != x / i)
//                     s.insert(x / i);
//             }
//         }
//         if (s.size() == 3)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     // cin>>t;

//     while (t--)
//         seemanto();
//     return 0;
// }

// optimal
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;
    while (n--)
    {
        set<ll> s;
        ll x;
        cin >> x;

        ll root = sqrtl(x);
        bool square = true;
        if (root * root != x)
            square = false;

        if (square)
        {
            if (root < 2)
                cout << "NO\n";
            else
            {
                bool prime = true;
                for (ll i = 2; i * i <= root; i++)
                {
                    if (root % i == 0)
                    {
                        prime = false;
                        break;
                    }
                }
                if (prime)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
        else
            cout << "NO\n";
    }
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

/*
    learning :
        -> kuno ekti number er exact 3 ta divisor tokhon e thakbe jokhon
            number ta square and root(x) prime hobe
        -> exact 4 ta distinct divisor thakbe jodi number (x) ti -
            1. x = p * q (duita prime er mulpile er soman)
            2. x = p^3 (p holo jekunu prime number)
            note : duita condition e mante hobe na , jekunu ekta manlei 4 ta distinct pawa psbl
*/