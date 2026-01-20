#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> arr(4);

    while (t--)
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        int temp = arr[0];
        sort(arr.begin(), arr.end());

        for (int i = 0; i < 4; i++)
        {
            if (arr[i] > temp)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}