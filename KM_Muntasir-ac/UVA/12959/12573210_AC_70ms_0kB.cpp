#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,m,j,k,l,mx,s,x,c;

    while(scanf("%lld %lld",&n,&m) != EOF)
    {
        map <int, int> mp;
        for(i=0;i<=(n*m)-1;i++)
        {
            cin>>x;
            s = (i%n);
            mp[s]+= x;
            //cout<<mp[s]<<endl;
        }
        mx=0;
        for(i=0;i<n;i++)
        {
            //cout<<mp[i]<<"-"<<endl;
            if(mx<mp[i])
            {
                mx=mp[i];
            }
        }
        c=0;
        for(i=n-1;i>=0;i--)
        {
            if(mp[i] == mx)
            {
                c=i;
                break;
            }
        }
        cout<<c+1<<endl;
        /*if(c == 0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<c+1<<endl;
        }*/
    }

    return 0;
}
