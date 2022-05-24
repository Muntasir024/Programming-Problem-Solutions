#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,k;
    double ox,oy,ax,ay,bx,by,s,l,o,r,d;
    cin>>k;
    for(t=1;t<=k;t++)
    {
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        d = sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
        r = sqrt(((ox-bx)*(ox-bx))+((oy-by)*(oy-by)));
        o = acos(1-(d*d)/(2*r*r));
        l = r*o;
        printf("Case %d: %lf\n",t,l);
    }

    return 0;
}

