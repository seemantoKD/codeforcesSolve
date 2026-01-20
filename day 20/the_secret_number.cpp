#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;

    vector<ll> v;

    ll div = 1;
    for (int i = 1; i < 19; i++)
    {
        div *= 10;
        ll divisor = 1 + div;
        if (n % divisor == 0)
            v.push_back(n / divisor);
    }

    sort(v.begin(), v.end());
    cout << v.size() << endl;
    if (!v.empty())
    {
        for (auto val : v)
            cout << val << " ";
        cout << endl;
    }
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
    learning :
        ধরো তোমার কাছে একটি সংখ্যা n, base b এবং k দেওয়া আছে

        সমস্যা ধরণ :
        n = x + (x * b^k)
        → n = x * (1 + b^k)

        মূল সূত্র :
        x = n / (1 + b^k)

        সমাধানের ধাপ :
        1. base b নির্ধারণ করো (যেমন: 10, 2, 3 ইত্যাদি) এবং k এর শর্ত বুঝে নাও (যেমন: k ≥ 1)।
        2. k এর সর্বোচ্চ সম্ভাব্য মান বের করো, যা n এর উপর নির্ভর করে।
        → সর্বোচ্চ k ≈ log_b(n)।
        3. k এর সম্ভাব্য মানগুলোর জন্য লুপ চালাও:
            divisor = 1 + b^k
            যদি (n % divisor == 0):
                x = n / divisor একটি বৈধ সমাধান
                x কে একটি লিস্টে রাখো।
        4. সব বৈধ x কে ascending order এ sort করো।
        5. আউটপুট:
            - প্রথমে: বৈধ x এর সংখ্যা
            - তারপর: সব বৈধ x

        জটিলতা :
        - টাইম কমপ্লেক্সিটি ≈ O(log_b(n)) প্রতি টেস্ট কেসে।
        (অধিকাংশ ক্ষেত্রে k এর সংখ্যা ছোট → দ্রুত সমাধান)

        গুরুত্বপূর্ণ বাস্তবায়ন নোট :
        -> বড় k এর জন্য floating point pow() ব্যবহার এড়িয়ে যাও → precision error হয়।
        বরং integer multiplication দিয়ে b^k হিসাব করো।
        -> divisor গুলো সঠিকভাবে তৈরি করো এবং mod শর্ত পরীক্ষা করো।
        -> যদি আউটপুট ascending order–এ চান → sort করো।
        -> edge case: যদি কোনো সমাধান না থাকে → আউটপুট হবে 0।

        উদাহরণ :
        n = 1111, b = 10
        k = 2 → divisor = 101 → n % divisor == 0 → x = 11 বৈধ
        k = 1 → divisor = 11 → n % divisor == 0 → x = 101 বৈধ
        আউটপুট:
            2
            11 101
*/
