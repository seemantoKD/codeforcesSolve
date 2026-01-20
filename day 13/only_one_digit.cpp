#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    while (t--)
    {
        cin >> n;
        vector<int> v;
        int temp = n;
        while (temp != 0)
        {
            int rem = temp % 10;
            v.push_back(rem);
            temp = temp / 10;
        }
        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }
    return 0;
}