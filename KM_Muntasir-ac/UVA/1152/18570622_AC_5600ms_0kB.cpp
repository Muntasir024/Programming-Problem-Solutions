#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, a[4007], b[4007], c[4007], d[4007], cnt, s;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        unordered_map <long long, int> m;
        cnt = 0;
        for(i=0; i<n; i++)
        {
            scanf("%lld %lld %lld %lld", &a[i], &b[i], &c[i], &d[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                m[a[i]+b[j]]++;
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                s = c[i]+d[j];
                s = s*(-1);
                if(m[s]){
                    cnt += m[s];
                    //cout << c[i] << " " << d[j] << endl;
                }
            }
        }
        printf("%lld\n", cnt);
        if(t) printf("\n");
    }
    return 0;
}
