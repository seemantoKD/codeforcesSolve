#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lima, bob;
    cin >> lima >> bob;

    int year = 0;

    while (lima <= bob)
    {
        lima = 3 * lima;
        bob = 2 * bob;
        year++;
    }
    cout << year << endl;
    
    return 0;
}