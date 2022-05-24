#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,t,mn,xr,xd;
    while(scanf("%d",&t) == 1 && t)
    {
        cin>>s;
        xr=xd=mn=t;
        for(i=0; i<s.length(); i++)
        {
            if(s[i] == 'Z')
            {
                mn=0;
                break;
            }
            else if (s[i] == 'R')
            {
                mn = min(mn,abs(xd-i));
                xr=i;
            }
            else if (s[i] == 'D')
            {
                mn = min(mn,abs(xr-i));
                xd=i;
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
