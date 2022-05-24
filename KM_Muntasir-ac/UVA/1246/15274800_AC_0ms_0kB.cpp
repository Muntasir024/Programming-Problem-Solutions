#include<bits/stdc++.h>
using namespace std;
bool prime[200007]= {0};
int factor(int n)
{
    int i, c=0, s=sqrt(n);
    for(i=1; i<=s; i++)
        if(n%i==0)
            c+=2;
    if(s*s==n)
        --c;
    return c;
}

int main()
{
    int t, l, h, i, p;

    prime[0]=1;
    prime[1]=1;
    for(i=2; i*i <= 200007; i++)
    {
        if(prime[i]==0)
        {
            for(p=i+i; p <= 200007; p=p+i)
                prime[p]=1;
        }
    }
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &l, &h);
        vector <int> v;
        for(i=l; i<=h; i++)
        {
            if(prime[i]==0)
            {
                v.push_back(i);
            }
            else
            {
                int c = factor(i);
                if(prime[c]==0)
                {
                    v.push_back(i);
                }
            }
        }
        p=v.size();
        if(p==0)
            printf("-1");
        else
        {
            printf("%d", v[0]);
            for(i=1; i<p; i++)
                printf(" %d", v[i]);
        }
        printf("\n");
    }
    return 0;
}
