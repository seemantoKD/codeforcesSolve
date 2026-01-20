#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int s = v.back();

    cout << s - v[0] << " " << s - v[1] << " " << s - v[2] << endl;
    return 0;
}