#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,h,i,c,mx,x,ans;
    while(scanf("%lld%lld", &l,&h) == 2)
    {
        if(l==0 && h==0)
            return 0;
        mx=0;
        if(h<l)
        {
            x=l;
            l=h;
            h=x;
        }
        for(i=l; i<=h; i++)
        {
            c=0;
            x = i;
            if(i==1)
                c=3;
            else
            {
                while(x>1)
                {
                    if(x%2==0)
                        x = x / 2;
                    else
                        x = (3*x) +1;
                    ++c;
                }
            }
            if(c > mx)
            {
                mx = c;
                ans = i;
            }
        }
        cout<<"Between "<<l<<" and "<<h<<", "<<ans<<" generates the longest sequence of "<<mx<<" values."<<endl;
    }
}
