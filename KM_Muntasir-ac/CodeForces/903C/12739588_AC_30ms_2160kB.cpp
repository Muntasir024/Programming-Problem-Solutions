#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c=0,mx=0,x;
    map <int,int> m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        m[x]++;
        if(m[x]>mx)
        {
            mx=m[x];
        }
    }

    cout<<mx<<endl;

    return 0;
}
