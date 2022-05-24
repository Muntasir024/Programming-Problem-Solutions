#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long q, i, n;
    map <long long, long long> m;
    map <long long, long long> c;
    scanf("%lld", &q);
    while(q--)
    {
        scanf("%lld", &i);
        if(i==1)
        {
            scanf("%lld", &n);
            if(c[m[n]]) c[m[n]]--;
            m[n]++;
            c[m[n]]++;
        }
        else if(i==2)
        {
            scanf("%lld", &n);
            if(m[n]){
                c[m[n]]--;
                m[n]--;
                c[m[n]]++;
            }
        }
        else
        {
            scanf("%lld", &n);
            if(c[n]) printf("1\n");
            else printf("0\n");
        }
    }
}

