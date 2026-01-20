#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    // array element input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int police = 0; // arr[i]>0 -> police
    int crime = 0;  // arr[i] == -1-> crime

    // counting
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            police = police + arr[i];
        }

        if (arr[i] == -1)
        {
            crime++;
            if (police > 0)
            {
                crime--;
                police--;
            }
        }
    }
    cout << crime << endl;
    return 0;
}