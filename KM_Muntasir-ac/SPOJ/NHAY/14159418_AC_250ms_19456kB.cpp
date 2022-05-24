#include<bits/stdc++.h>
using namespace std;
int ps[1000000+10];
int main()
{
    long long N,i,j,k,n,m;
    string tst,pat;
    while(scanf("%lld",&N)!=EOF)
    {
       // getchar();
        cin>>pat;
        cin>>tst;
        n = tst.size();
        m = pat.size();

        j = 0;
        i = 1;
        ps[0] = 0;
        while(i < m)
        {
            if(pat[i] == pat[j])
            {
                ps[i] = j + 1;
                i++;
                j++;
            }
            else
            {
                if(j == 0)
                {
                    ps[i] = 0;
                    i++;
                }
                else
                {
                    j = ps[j-1];
                }
            }
        }

        i = j = 0;
        while(i < n)
        {
            if(pat[j] == tst[i])
            {
                i++;
                j++;
            }
            if(j == m)
            {
                printf("%d\n", i - m );
                j = ps[j-1];
            }
            else if(i < n and pat[j] != tst[i])
            {
                if(j != 0)
                    j = ps[j-1];
                else
                    i++;
            }
        }

        printf("\n");
    }
    return 0;
}
