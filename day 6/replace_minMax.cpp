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

    int *min_val = min_element(arr, arr + n);
    int *max_val = max_element(arr, arr + n);

    swap(*max_val, *min_val);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
learning :
1.array theke kivabe max and min element kuja jay
2. arrayr element er modde swapping
*/