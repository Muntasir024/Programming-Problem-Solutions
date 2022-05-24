#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t=1,i,j,c,n;
    while(scanf("%lld",&n) != EOF)
    {
        long long a[n+2],mx=0;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            c=1;
            for(j=i; j<n; j++)
            {
                c = c * a[j];

                if( c > mx )
                    mx = c;
            }
        }
        cout<<"Case #"<<t++<<": The maximum product is "<<mx<<"."<<endl;
        cout<<endl;
    }
    return 0;
}
