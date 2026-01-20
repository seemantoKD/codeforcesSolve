#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    vector<int> perfect;
    int count = 0;
    int num = 1;
    while (count < 10000)
    {
        int temp = num;
        int sum = 0;
        while (temp != 0)
        {
            int rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }
        if (sum == 10)
        {
            perfect.push_back(num);
            count++;
        }
        num++;
    }
    cout << perfect[k - 1] << endl;
    return 0;
}

/*
learning :
    -> find k^th number perfect value ;

    # a number is called perfect when digit of sum = 10
*/