#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,mn=1005,x;
    cin>>n>>k;
    map <int,int> m;
    for(int i=0;i<k;i++)
    {
        cin>>x;
        m[x]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(m[i]<mn)
        {
            mn=m[i];
        }
    }

    cout<<mn<<endl;
//main();
    return 0;
}
