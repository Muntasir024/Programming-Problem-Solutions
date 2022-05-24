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
    long long a,b,k,i,d,f,c,t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        x=y=0;
        for(n=a; n<=b; n++)
        {
            if(n%k==0)
            {
                break;
            }
        }
        a=n;
        for(; a<=b; a+=k)
        {
            d=1;
            f=1;
            c=0;
            n=a;
            while(n%2==0)
            {
                ++c;
                n=n/2;
            }
            if(c!=0){
            d=d*(c+1);
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
                    d=d*(c+1);
                    f=f*((pw(i,c+1)-1)/(i-1));
                }
            }
            c=0;
            if(n>1)
            {
                d=d*2;
                f=f*((pw(n,2)-1)/(n-1));
            }
            //cout<<a<<" "<<d<<" "<<f<<endl;
            x+=d;
            y+=f;
        }
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}
