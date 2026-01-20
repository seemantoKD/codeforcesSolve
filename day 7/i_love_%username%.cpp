#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mn = arr[0];
    int mx = arr[0];

    int amz = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
        {
            amz++;
            mx = arr[i];
        }

        if (arr[i] < mn)
        {
            amz++;
            mn = arr[i];
        }
    }
    cout << amz << endl;
    return 0;
}

/*
learning ->
যেকোনো সময়ের ধারাবাহিক সংখ্যায় সবচেয়ে ভালো বা খারাপ রেজাল্ট কোথায় হয়েছে, তা খুঁজতে এই পদ্ধতি কাজে লাগে।
*/