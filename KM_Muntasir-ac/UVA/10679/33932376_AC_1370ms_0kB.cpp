#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,N,m,j,q,pos,i;
    string s,p;
    scanf("%lld",&N);
    getchar();
    while(N--)
    {
        getline(cin,s);
        n = s.size();
        scanf("%lld",&q);
        getchar();
        while(q--)
        {
            getline(cin,p);
            pos = -1;
            m = p.size();
            long long ps[m+10];
            j = 0;
            i = 1;
            ps[0] = 0;
            while(i < m)
            {
                if(p[i] == p[j])
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
                if(p[j] == s[i])
                {
                    i++;
                    j++;
                }
                if(j == m)
                {
                    pos = i-m;
                    break;
                }
                else if(i < n and p[j] != s[i])
                {
                    if(j != 0)
                        j = ps[j-1];
                    else
                        i++;
                }
            }
            if(pos == (-1))
                printf("n\n");
            else
                printf("y\n");
        }
    }
    return 0;
}