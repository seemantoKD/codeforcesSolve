// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         long long n;
//         cin >> n;

//         long long temp = n;

//         long long a = -1, b = -1, c = -1;

//         // Step 1: find first divisor a
//         for (long long i = 2; i * i <= n; i++)
//         {
//             if (temp % i == 0)
//             {
//                 a = i;
//                 temp /= a;
//                 break;
//             }
//         }

//         if (a == -1)
//         {
//             cout << "NO\n";
//             continue;
//         }

//         // Step 2: find second divisor b ≠ a
//         for (long long i = a + 1; i * i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 b = i;
//                 temp /= b;
//                 break;
//             }
//         }

//         // Now c = remaining n
//         c = temp;

//         // Step 3: check validity
//         if (a != -1 && b != -1 && c > 1 && c != a && c != b)
//         {
//             cout << "YES\n";
//             cout << a << " " << b << " " << c << endl;
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }

// /*
// problem -> kuno ekti number(n) ke a,b,c namok tin ti distinct number er product
// hisebe prokas kora jay kina. gele yes print kore then a,b,c print otherwise no print.

// step for solving :
// 1. jake prokas korbo take(n) input neya
// 2. a,b,c initially dorbo nai tai a=b=c=-1;
// 3. find first divisor
// 4. find second divisor
// 5. find third divisor
// 6. check validity

// */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    long long n;
    while (t--)
    {
        cin >> n;
        long long temp = n;

        long long a = -1, b = -1, c = -1;
        for (long long i = 2; i * i <= temp; i++)
        {
            if (temp % i == 0)
            {
                a = i;
                temp = temp / a;
                break;
            }
        }

        if (a == -1)
        {
            cout << "NO\n";
            continue;
        }

        for (long long i = a + 1; i * i <= temp; i++)
        {
            if (temp % i == 0)
            {
                b = i;
                temp = temp / b;
                break;
            }
        }

        c = temp;

        if (a != -1 && b != -1 && c > 1 && c != a && c != b)
        {
            cout << "YES\n";
            cout << a << " " << b << " " << c << endl;
        }

        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}