#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,d,r,x,y,c;
    while(scanf("%d %d %d",&n,&d,&r) == 3)
    {
        if(n==0 && d==0 && r==0)
            break;
        else
        {
            c=0;
            int m[n+2],e[n+2];
            for(i=0; i<n; i++)
            {
                cin>>m[i];
            }
            sort(m,m+n);
            for(i=0; i<n; i++)
            {
                cin>>e[i];
            }
            sort(e,e+n,greater<int>());
            for(i=0; i<n; i++)
            {
                if((m[i]+e[i])>d)
                {
                    c += ((m[i]+e[i]-d)*r);
                }
            }
            cout<<c<<endl;
        }
    }

    return 0;
}
