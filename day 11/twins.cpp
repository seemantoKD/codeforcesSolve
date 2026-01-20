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

    int initial_sum = 0;
    for (int i = 0; i < n; i++)
    {
        initial_sum += v[i];
    }

    sort(v.rbegin(),v.rend());

    int result = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        result += v[i];
        count++;
        int rem = initial_sum - result;
        if (result > rem)
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}


/*
learning : 
-> descending order e sort kora shikhlam
-> kivabe ekti array te maximum sum pawa jay kom songkhok 
element niye ja baki element er sum er ceye actually beshi.
*/