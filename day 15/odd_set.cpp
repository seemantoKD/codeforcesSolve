#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    int n;
    while(t--)
    {
        cin>>n;
        int sz = 2 * n;
        vector<int>v(sz);
        for(int i = 0;i<sz;i++)
        {
            cin>>v[i];
        }

        int even = 0;
        int odd = 0;
        for(int i = 0;i<sz;i++)
        {
            if(v[i] % 2 == 0)
            {
                even++;
            }

            else 
            {
                odd++;
            }
        }

        if(even == odd)
        {
            cout<<"Yes\n";
        }

        else 
        {
            cout<<"No\n";
        }
    }
    return 0;
}