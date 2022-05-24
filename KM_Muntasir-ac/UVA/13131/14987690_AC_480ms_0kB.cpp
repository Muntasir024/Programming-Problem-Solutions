#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, k, s, t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        if(k==1)
        {
            cout<<"0"<<endl;
            continue;
        }

        s = 1;
        if(n%k != 0)
            s += n;
        for(i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                if(i % k)
                    s += i;
                if((n/i) != i)
                    if((n/i) % k)
                        s += (n/i);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
