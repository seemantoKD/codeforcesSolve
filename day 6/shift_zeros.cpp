#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            v.push_back(arr[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            v.push_back(arr[i]);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    return 0;
}