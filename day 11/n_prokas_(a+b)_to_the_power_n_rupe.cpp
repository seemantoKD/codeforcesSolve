// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     string s;
//     while (t--)
//     {
//         cin >> s;
//         long long year = stoll(s);

//         long long root = sqrt(year);
//         long long mul = root * root;

//         if (mul != year)
//         {
//             cout << -1 << endl;
//             continue;
//         }

//         else
//         {
//             cout << 0 << " " << root << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;

    string s;
    while (t--)
    {
        cin >> s;
        long long year = stoll(s);
        long long root = (long long)round(pow((double)year, 1.0 / 3)); // n= 3
        long long mul = 1;

        for (int i = 1; i <= 3; i++) // n = 3
        {
            mul = mul * root;
        }

        if (mul != year)
        {
            cout << -1 << endl;
        }

        else
        {
            cout << 0 << " " << root << endl;
        }
    }
    return 0;
}

/*
step for solving :
1. string input
2. convert string to int
3. find nth root using round and pow function
    -> long long root = (long long)round(pow((double)year, 1.0 / n));
    -> codeforcees e g++23 e submit korte hobe noyto error dibe

4. long long mul = 1
5. for (int i = 1; i <= 3; i++) // here 3 is a+b er power
    {
        mul = mul * root;
    }
6. condition chek
    if(mul != string s)
    {
        cout<<-1;
    }

    else
    {
        cout<<0<<" "<<root;
    }


    note !
    -> onek somoy ei type er code vs code e syntax error dekhay
    but baki sob online compiler e thik ase , even cf o accept kore.
*/