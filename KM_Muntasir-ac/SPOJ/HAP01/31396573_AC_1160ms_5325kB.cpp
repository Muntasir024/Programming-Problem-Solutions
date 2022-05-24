#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, m, k, c=0, x, i, j, l, a, b;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld %lld", &n, &m, &k);
        for(i=n;i<=m;i++)
        {
            x=i;
            a=b=j=0;
            string s = "";
            while(x)
            {
                if(x%2) s = s + '1';
                else s = s + '0';
                x/=2;
                j++;
            }
            reverse(s.begin(), s.end());
            for(l=0;l<j;l++)
            {
                if(l%2==1 && s[l]=='1')
                        b++;
                else if(l%2==0 && s[l]=='1')
                        a++;
            }
            if(abs(a-b) == k)
                c++;
        }
        printf("%lld\n", c);
        c=0;
    }
    return 0;
}