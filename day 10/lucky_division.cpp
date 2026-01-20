// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> lucky;

//     // find lucky between 1 to n
//     for (int i = 1; i <= n; i++)
//     {
//         int temp = i;
//         int Lucky = 1;

//         while (temp != 0)
//         {
//             int digit = temp % 10;
//             if (digit != 4 && digit != 7)
//             {
//                 Lucky = 0;
//                 break;
//             }
//             temp = temp / 10;
//         }

//         if (Lucky == 1)
//         {
//             lucky.push_back(i);
//         }
//     }

//     // check almost lucky
//     int flag = 0;
//     for (int i = 0; i < lucky.size(); i++)
//     {
//         if (n % lucky[i] == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 1)
//     {
//         cout << "YES\n";
//     }

//     else
//     {
//         cout << "NO\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> lucky;

    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        int Lucky = 1;
        while (temp != 0)
        {
            int digit = temp % 10;
            if (digit != 4 && digit != 7)
            {
                Lucky = 0;
                break;
            }
            temp = temp / 10;
        }
        if (Lucky == 1)
        {
            lucky.push_back(i);
        }
    }

    int flag = 0;
    for (int i = 0; i < lucky.size(); i++)
    {
        if (n % lucky[i] == 0)
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
    return 0;
}