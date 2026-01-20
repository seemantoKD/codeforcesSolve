#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    string s;
    int result = 0;
    while (t--)
    {
        cin >> s;
        if (s == "Icosahedron")
        {
            result += 20;
        }

        if (s == "Cube")
        {
            result += 6;
        }

        if (s == "Tetrahedron")
        {
            result += 4;
        }

        if (s == "Dodecahedron")
        {
            result += 12;
        }

        if (s == "Octahedron")
        {
            result += 8;
        }
    }
    cout << result << endl;
    return 0;
}