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

    sort(arr, arr + n);
    int Min = arr[0];

    // count frequency
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == Min)
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << "Unlucky\n";
    }

    else
    {
        cout << "Lucky\n";
    }
}