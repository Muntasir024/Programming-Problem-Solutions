#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,mn=10000,x;
    map <int,int> m;
    cin>>n>>k;
    for(i=0;i<k;i++)
    {
        cin>>x;
        m[x]++;
    }
    for(i=1;i<=n;i++)
    {
        if(m[i]<mn)
            mn=m[i];
    }
    cout<<mn<<endl;

    return 0;
}
