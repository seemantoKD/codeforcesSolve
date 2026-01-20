#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int min_sum = 8;

    if (n < min_sum)
    {
        cout << -1 << endl;
    }

    for (int a = 4; a < n; a++)
    {
        int b = n - a;
        int flaga = 0;
        int flagb = 0;

        // for a
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                flaga = 1;
                break;
            }
        }

        // for b
        for (int j = 2; j < b; j++)
        {
            if (b % j == 0)
            {
                flagb = 1;
                break;
            }
        }

        if (flaga == 1 && flagb == 1)
        {
            cout << a << " " << b << endl;
            break;
        }
    }
    return 0;
}

/*
learning :
-> duiti jougik songkhar jugfol er maddhome n prokas
*/

/*
// dui er jonno katbe na , k >2 er jonno code ti perfect
 * এই কোডটি একটি সমস্যার সমাধান করার ধাপ:
 * "একটি সংখ্যা n কে k টি যৌগিক সংখ্যার যোগফল হিসেবে প্রকাশ করা।"
 *
 * স্টেপসমূহ:
 * ১. সংখ্যা n এবং k ইনপুট নেওয়া হয়।
 * ২. প্রতিটি যৌগিক সংখ্যার ন্যূনতম মান ৪ ধরে min_sum = 4 × k হিসাব করা হয়।
 * ৩. যদি n < min_sum হয়, তাহলে সমাধান অসম্ভব, তাই -1 প্রিন্ট করা হয়।
 * ৪. যদি n ≥ 4 × k হয়, তাহলে প্রথম k-1 সংখ্যাকে ৪ ধরে প্রিন্ট করা হয় এবং n থেকে সেই মান বাদ দেওয়া হয়।
 * ৫. অবশিষ্ট সংখ্যাটি যৌগিক কিনা চেক করা হয়।
 * ৬. যদি যৌগিক হয়, সেটি প্রিন্ট করা হয়, অর্থাৎ k টি যৌগিক সংখ্যার যোগফল n হয়।
 * ৭. যদি যৌগিক না হয়, তাহলে -1 প্রিন্ট করা হয়।
 */

/*
problem e jodi bolto k ti jougik number er jugfol hisebe prokas korte tokhon code :



#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long k;
    cin >> k;

    long long min_sum = 4 * k;

    if (n < min_sum)
    {
        cout << "-1\n";
    }

    else
    {
        int flag = 0;

        // k-1 টা সংখ্যা 4 রাখি
        for (int i = 1; i < k; i++)
        {
            cout << 4 << " ";
            n = n - 4;
        }

        // এখন n এর মানে দাঁড়ালো শেষ সংখ্যাটা
        int flag1 = 0;

        // এখন চেক করবো n টা যৌগিক কিনা
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag1 = 1;
                break;
            }
        }

        if (flag1 == 1 && n > 3)
        {
            cout << n << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}

*/

/*
tricks :
n -> even hole duiti jougik songkha hoy n-4 and 4
n_> odd hole duiti jougik songkha hoy 9 and n-9

code :
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n - 4 << " " << 4 << endl;
    }

    else
    {
        cout << 9 << " " << n - 9 << endl;
    }
    return 0;
}
*/
