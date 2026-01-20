#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        // input element
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // sorting
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        //count sub_array_size
        int sub_size = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int mn = arr[i];
                int mx = arr[j];
                if ((mn + mx) % 2 == 0)
                {
                    int size = j - i + 1;
                    if (size > sub_size)
                        sub_size = size;
                }
            }
        }

        cout << n - sub_size << "\n";
    }

    return 0;
}