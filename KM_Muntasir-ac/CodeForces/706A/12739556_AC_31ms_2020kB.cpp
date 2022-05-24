#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b,x,y;
    double f,v,m;
    cin>>a>>b;
    cin>>n;
    cin>>x>>y>>v;
    f=sqrt(((x-a)*(x-a))+((y-b)*(y-b)));
    m=f/v;
    for(i=1; i<n; i++)
    {
        cin>>x>>y>>v;
        f=sqrt(((x-a)*(x-a))+((y-b)*(y-b)));
        if(f/v<m)
            m=f/v;
    }
    printf("%.20lf",m);
}
