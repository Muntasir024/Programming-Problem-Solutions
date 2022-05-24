#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, j, c=0, ans=0;
    cin>>n;
    long long a[n+2], b[n+2];
    for(i=1;i<=n;i++) scanf("%lld %lld", &a[i], &b[i]);
    for(i=1;i<=n;i++)
    {
        c+=a[i]-b[i];
        if(c<0)
        {
            ans=i;
            c=0;
        }
    }
    printf("%lld\n", ans);
    //main();
}
