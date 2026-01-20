#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        int count = 0;
        int position = 0;
        vector<int> round;
        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                int round_number = digit * pow(10, position);
                count++;
                round.push_back(round_number);
            }
            n = n / 10;
            position++;
        }

        cout << count << endl;
        for (int i : round)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
learning :
1. যেকোনো একটি সংখ্যার ডিজিট আলাদা করে একক,দশক,শতক,হাজার বের করা শিখেছি
2. how to use pow function and how to work
*/