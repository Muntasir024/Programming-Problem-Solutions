#include<bits/stdc++.h>
using namespace std;

bool check(long long n, long long i)
{
    return n&(1<<i);
}

int main()
{
    long long n, m, l, r, x, i, j, c, s, a, b, ans=0;
    scanf("%lld %lld %lld %lld", &n, &l, &r, &x);
    long long ar[n+2];
    for(i=0;i<n;i++) scanf("%lld", &ar[i]);
    sort(ar, ar+n);
    m=pow(2, n);
    for(i=1;i<m;i++)
    {
        c=s=0;
        for(j=0;j<n;j++)
        {
            if(check(i, j))
            {
                if(!c) a=ar[j];
                b=ar[j];
                s+=ar[j];
                c++;
            }
        }
        if(c>=2 && (b-a)>=x && s>=l && s<=r)
            ans++;
    }
    printf("%lld\n", ans);
    return 0;
}
