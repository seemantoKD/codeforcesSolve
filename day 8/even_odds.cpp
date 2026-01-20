// //evabe korle memory limit exceeed ase
// #include <bits/stdc++.h>
// using namespace std;

// vector<long long> v;

// int main()
// {
//     long long n, k;
//     cin >> n >> k;

//     for (long long i = 1; i <= n; i += 2)
//     {
//         v.push_back(i);
//     }

//     for (long long i = 2; i <= n; i += 2)
//     {
//         v.push_back(i);
//     }

//     cout << v[k - 1] << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2;

    if (k <= oddCount)
    {
        cout << 2 * k - 1 << "\n";
    }

    else
    {
        long long result = k - oddCount;
        cout << 2 * result << "\n";
    }

    return 0;
}

/*
ei technique jokhon use korbo :
->k-তম বিজোড় বা জোড় সংখ্যা খোঁজা

কোনো নির্দিষ্ট প্যাটার্নে array তৈরি করা

permutation related problems (যেখানে দুই ধরনের উপাদানকে ভিন্নভাবে সাজাতে হয়)

*/
