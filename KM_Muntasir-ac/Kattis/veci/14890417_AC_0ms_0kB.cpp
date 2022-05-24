#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0,d,i,ans=-1,n,x,f,j,m[20]={0};
    cin>>a;
    n=a;
    while(n)
    {
        i=n%10;
        m[i]++;
        n=n/10;
        ++c;
    }
    for(i=a+1; i<=999999; i++)
    {
        x=i;
        d=0;
        f=1;
        int a[20]={0},y;
        while(x)
        {
            y=x%10;
            a[y]++;
            x=x/10;
            ++d;
        }
        for(j=0;j<=9;j++){
            if(a[j] != m[j])
                f=0;
        }
        if(f==1)
        {
            ans=i;
            cout<<ans<<endl;
            break;
        }
        if(d>c)
            break;
    }
    if(ans == -1)
        cout<<"0"<<endl;
    return 0;
}

