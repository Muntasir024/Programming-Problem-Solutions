#include<bits/stdc++.h>
#define ll long long
using namespace std ;
#define maxn 1000008
ll prime[maxn+3]= {0};
int main()
{
    ll n,i,j,p,l=0,x,f;
    vector <ll> v;
    prime[0]=1;
    prime[1]=1;
    for(i=2; i<=maxn; i++)
    {
        if(prime[i]==0)
        {
            x=i*i;
            v.push_back(x);
            for(p=i+i; p<=maxn; p=p+i)
                prime[p]=1;
        }
    }
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        f = binary_search(v.begin(),v.end(),x);
        if(f)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
