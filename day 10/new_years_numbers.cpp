// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     int year;
//     while (t--)
//     {
//         cin >> year;
//         if (year % 2020 == 0)
//         {
//             cout << "YES\n";
//         }

//         else if (year % 2021 == 0)
//         {
//             cout << "YES\n";
//         }

//         else
//         {
//             int flag = 0;
//             for (int x = 0; x <= year / 2020; x++)
//             {
//                 int rem = year - x * 2020;
//                 if (rem >= 0 && rem % 2021 == 0)
//                 {
//                     flag = 1;
//                     break;
//                 }
//             }

//             if (flag == 1)
//             {
//                 cout << "YES\n";
//             }

//             else
//             {
//                 cout << "NO\n";
//             }
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    while (t--)
    {
        cin >> n;
        if (n % 2020 == 0)
        {
            cout << "YES\n";
        }

        else if (n % 2021 == 0)
        {
            cout << "YES\n";
        }

        else
        {
            int flag = 0;
            for (int x = 0; x <= n / 2021; x++)
            {
                int rem = n - 2021 * x;
                if (rem % 2020 == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 1)
            {
                cout << "YES\n";
            }

            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}

/*
Learning:
-> শিখলাম কীভাবে একটি সংখ্যা (n) কে দুটি নির্দিষ্ট সংখ্যা (2020, 2021) এর non-negative linear combination দিয়ে প্রকাশ করা যায় কি না তা যাচাই করতে হয়।
*/