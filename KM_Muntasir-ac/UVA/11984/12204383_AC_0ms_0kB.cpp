#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    double f,c,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>c>>f;
        ans = (5*f+9*c)/9.0;
        printf("Case %d: %.2f\n",i,ans);
    }

    return 0;
}
