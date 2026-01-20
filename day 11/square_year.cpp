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
#include<cmath>
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
        long long root = (long long)round(pow((double)year, 1.0 / 2));
        long long mul = 1;

        for (int i = 1; i <= 2; i++)
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