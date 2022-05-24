#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m, i, j, c = 0, f;
    string s,p;
    cin>>s;
    cin>>p;
    n=s.size();
    m=p.size();
    for(i=0;i+m<=n;i++)
    {
        f = 1;
        for(j=0;j<m;j++)
        {
            if(s[i+j] == p[j])
            {
                f=0;break;
            }
        }
        if(f) ++c;
    }
    cout<<c<<endl;
}

