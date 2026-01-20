#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= v[k - 1] && v[i] > 0) //jehetu k 1 based but amra loop caliyechi 0 theke tai inxdex k-1 korechi
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}