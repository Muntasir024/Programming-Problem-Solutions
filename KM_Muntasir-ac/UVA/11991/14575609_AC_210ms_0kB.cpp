#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,cnt,k,i,j,x;
    while(scanf("%lld %lld",&n,&m) != EOF)
    {
        map<int,vector<int> > v;

        for(i=1;i<=n;i++)
        {
            cin>>x;
            v[x].push_back(i);
        }
        while(m--)
        {
            cin>>i>>x;
            if(i==0) printf("0\n");
            else{
            i<=v[x].size()?printf("%d\n",v[x][i-1]):printf("0\n");
            }
        }
    }

    return 0;
}
