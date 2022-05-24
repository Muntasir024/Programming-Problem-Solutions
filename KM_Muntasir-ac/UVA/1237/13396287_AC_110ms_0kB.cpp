#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,q,i,p,l,c,k;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        cin>>n;
        cin.ignore();
        string s[n+2],m;
        int a[n+2],b[n+2];
        for(i=0;i<n;i++)
        {
            cin>>s[i]>>a[i]>>b[i];
            cin.ignore();
        }
        cin>>q;
        while(q--)
        {
            cin>>p;
            l=0;
            c=0;
            for(i=0;i<n;i++)
            {
                if(a[i]<=p && b[i]>=p)
                {
                    m=s[i];
                    ++c;
                }
            }
            if(c==1)
                cout<<m<<endl;
            else
                cout<<"UNDETERMINED"<<endl;
        }
        if(k!=t)
        cout<<endl;
    }
    return 0;
}
