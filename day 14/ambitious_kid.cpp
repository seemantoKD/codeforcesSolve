#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), [](int a, int b)
         {
            int absA = abs(a);
            int absB = abs(b);

            if (absA < absB)
            {
                return true;
            }

            else
            {
                return false;
            } });

    int min = v[0];
    cout << abs(min) << endl;
    return 0;
}

/*
learning :
-> sort function use kore vector er element guluke shudu value er upor base kore
    sort kora. sign ignore korlam


-> lambda function use in sort : [](int a, int b)
*/
