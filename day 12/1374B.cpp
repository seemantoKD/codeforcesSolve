// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     long long n;
//     while (t--)
//     {
//         cin >> n;
//         long long temp = n;
//         // bananu possible kina
//         int flag = 1; // dhori banate parchi

//         while (temp % 2 == 0)
//         {
//             temp = temp / 2;
//         }

//         while (temp % 3 == 0)
//         {
//             temp = temp / 3;
//         }

//         if (temp != 1) // bananu jay ni
//         {
//             flag = 0;
//         }

//         // bananu gele count print na gele -1 print
//         if (flag == 0)
//         {
//             cout << -1 << endl;
//         }

//         else
//         {
//             int count2 = 0;
//             int count3 = 0;
//             long long val = n;

//             while (val % 2 == 0)
//             {
//                 val = val / 2;
//                 count2++;
//             }

//             while (val % 3 == 0)
//             {
//                 val = val / 3;
//                 count3++;
//             }

//             // possible na
//             if (count2 > count3)
//             {
//                 cout << -1 << endl;
//             }

//             // possible
//             else
//             {
//                 // count3 -> kotobar 6 diye vag kora jabe
//                 int result = count3 - count2; // 2 barate hobe kotobar
//                 int count = result + count3;  // totalCount->2 baranu + 6 diye vag kora
//                 cout << count << endl;
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

    long long n;
    while (t--)
    {
        cin >> n;
        long long temp = n;
        int flag = 1;

        while (temp % 2 == 0)
        {
            temp = temp / 2;
        }

        while (temp % 3 == 0)
        {
            temp = temp / 3;
        }

        if (temp != 1)
        {
            flag = 0;
        }

        if (flag == 0)
        {
            cout << -1 << endl;
        }

        else
        {
            long long val = n;
            int count2 = 0;
            int count3 = 0;

            while (val % 2 == 0)
            {
                count2++;
                val = val / 2;
            }

            while (val % 3 == 0)
            {
                count3++;
                val = val / 3;
            }

            if (count3 < count2)
            {
                cout << -1 << endl;
            }

            else
            {
                int result = count3 - count2;
                int count = count3 + result;
                cout << count << endl;
            }
        }
    }
    return 0;
}