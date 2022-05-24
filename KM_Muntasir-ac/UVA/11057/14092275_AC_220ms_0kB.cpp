#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,mn,ans1,ans2,c;
    while(scanf("%d",&n)==1)
    {
        vector <int> v;
        for(i=0; i<n; i++)
        {
            scanf("%d",&c);
            v.push_back(c);
        }
        scanf("%d",&c);
        sort(v.begin(),v.end());
        mn=v[n-1];
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {

                if(v[i]+v[j]==c && v[j]-v[i]<mn)
                {
                    ans1=v[i];
                    ans2=v[j];
                    mn=v[j]-v[i];
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",ans1,ans2);
    }
    return 0;
}
