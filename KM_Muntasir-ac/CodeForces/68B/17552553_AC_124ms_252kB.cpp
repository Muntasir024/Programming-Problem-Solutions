#include<bits/stdc++.h>
using namespace std;

double a[10007];

int main()
{
    int n, k, i;
    cin>>n>>k;
    for(i=0;i<n;i++) cin>>a[i];
    if(n==1){cout<<a[0]<<endl;return 0;}
    sort(a, a+n);
    double l=a[0], r=a[n-1], m, s;
    m=(l+r)/2.0;
    while(r-l > 0.0000001)
    {
        s = 0;
        for(i=0;i<n;i++)
        {
            if(a[i]>m) s+=(a[i]-m)-(a[i]-m)*k/100.0;
            else s-=(m-a[i]);
        }
        if(s < -0.0000001) r=m;
        else if(s > 0.0000001) l=m;
        else break;
        m=(l+r)/2.0;
    }
    printf("%.9lf\n", m);
    //main();
}