#include<bits/stdc++.h>
using namespace std;

long long pw(long long x, long long c)
{
    long long d=1,i;
    for(i=1; i<=c; i++)
        d=d*x;
    return d;
}

int main()
{
    long long n,x,i,a,l,f,c,ans,t=1;
    while(cin>>x, x)
    {
        l=ans=0;
        for(a=1; a<=1000; a++)
        {
            f=1;
            c=0;
            n=a;
            while(n%2==0)
            {
                ++c;
                n=n/2;
            }
            if(c!=0)
            {
                f=f*(pw(2,c+1)-1);
            }
            for(i=3; i*i<=n; i+=2)
            {
                c=0;
                while(n%i==0)
                {
                    ++c;
                    n=n/i;
                }
                if(c != 0)
                {
                    f=f*((pw(i,c+1)-1)/(i-1));
                }
            }
            c=0;
            if(n>1)
            {
                f=f*((pw(n,2)-1)/(n-1));
            }
            if(f==x)
            {
                ans=a;
            }
        }
        cout<<"Case "<<t++<<": ";
        if(ans == 0)
            cout<<"-1"<<endl;
        else
            cout<<ans<<endl;
    }


    return 0;
}
