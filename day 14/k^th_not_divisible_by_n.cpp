// code thik ache but mle(memory limit excedeed) asbe
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      int t;
//      cin >> t;

//     long long n;
//     long long k;
//     while (t--)
//     {
//         vector<long long> not_divisible;
//         cin >> n >> k;
//         long long num = 1;
//         long long count = 0;

//         while (count < k)
//         {
//             long long temp = num;
//             if (temp % n != 0)
//             {
//                 count++;
//                 not_divisible.push_back(num);
//             }
//             num++;
//         }
//         cout << not_divisible[k - 1] << endl;
//     }
//     return 0;
// }

// optimize approach
// eta o tle dey
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     int n, k;
//     while (t--)
//     {
//         cin >> n >> k;

//         long long num = 1;
//         long long count = 0;
//         while (1)
//         {
//             if (num % n != 0)
//             {
//                 count++;
//                 if (count == k)
//                 {
//                     cout << num << endl;
//                     break;
//                 }
//             }
//             num++;
//         }
//     }
//     return 0;
// }

// optimal approach
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n, k;
    while (t--)
    {
        cin >> n >> k;
        int result1 = n - 1;
        int result2 = k - 1;
        int difference = result2 / result1;
        int ans = k + difference;
        cout << ans << endl;
    }
    return 0;
}