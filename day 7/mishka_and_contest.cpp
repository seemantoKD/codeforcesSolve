#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> problem(n);
    vector<int> solve;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> problem[i];
    }

    if (problem[0] > k || problem[n - 1] > k)
    {
        cout << "0" << endl;
        return 0;
    }

    for (int i = 0; i < problem.size(); i++)
    {
        if (problem[i] <= k)
        {
            if (find(solve.begin(), solve.end(), problem[i]) == solve.end())
            {
                count++;
                solve.push_back(problem[i]);
            }
        }
    }

    for(int i : solve)
    {
        cout<<i<<endl;
    }

    // if (count == 0)
    // {
    //     cout << "0" << endl;
    // }

    // else
    // {
    //     cout << count << endl;
    // }
    return 0;
}