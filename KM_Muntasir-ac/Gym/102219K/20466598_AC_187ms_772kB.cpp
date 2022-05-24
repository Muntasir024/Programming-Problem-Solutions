#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, tc, i;
    cin>>t;
    for(tc=1;tc<=t;tc++)
    {
        cin>>n;
        long long a[n+2], c=1,s;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        s=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]>=s)
            {
                s+=a[i];
                c++;
            }
        }
        cout<< "Case #" << tc << ": " << c <<endl;
    }
    return 0;
}
