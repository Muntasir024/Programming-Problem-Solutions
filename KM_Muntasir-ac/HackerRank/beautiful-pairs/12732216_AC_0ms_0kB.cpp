#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt=0,x,y;
    cin>>n;
    map <int, int> mp;
    for(i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
    }
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(mp[x]>0)
        {
            ++cnt;
            mp[x]--;
        }
    }
    if(cnt<n)
        cout<<cnt+1<<endl;
    else
        cout<<cnt-1<<endl;

    return 0;
}
