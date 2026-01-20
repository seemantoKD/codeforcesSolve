#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v;

    int result1 = a + b * c;
    int result2 = a * (b + c);
    int result3 = a * b * c;
    int result4 = (a + b) * c;
    int result5 = a + b + c;

    v.push_back(result1);
    v.push_back(result2);
    v.push_back(result3);
    v.push_back(result4);
    v.push_back(result5);

    sort(v.begin(), v.end());
    cout << v.back() << endl;
    return 0;
}