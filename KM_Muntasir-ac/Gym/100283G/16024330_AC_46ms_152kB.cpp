#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("jenga.in", "r", stdin);
    int n, k, i, t;
    cin>>k;
    for(t=1;t<=k;t++)
    {
        cin>>n;
        if(n%3)
            printf("Case %d: Bakkar\n", t);
        else
            printf("Case %d: Wahdan\n", t);
    }
    return 0;
}
