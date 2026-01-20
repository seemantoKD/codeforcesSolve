#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    vector<int> distinct;
    vector<int> index;
    cin >> n >> k;
    vector<int> student(n);

    for (int i = 0; i < n; i++)
    {
        cin >> student[i];
    }

    for (int i = 0; i < student.size(); i++)
    {
        if (find(distinct.begin(), distinct.end(), student[i]) == distinct.end())
        {
            distinct.push_back(student[i]);
            index.push_back(i + 1);
        }
    }

    if (distinct.size() >= k)
    {
        cout << "YES\n";
        for (int i = 0; i < k; i++)
        {
            cout << index[i] << " ";
        }
        cout << endl;
    }

    else
    {
        cout << "NO\n";
    }
    return 0;
}