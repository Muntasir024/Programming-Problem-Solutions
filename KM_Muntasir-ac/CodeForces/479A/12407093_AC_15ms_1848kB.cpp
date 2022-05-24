#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  m,n,o, ar[5];
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&o);

    ar[0]=m+(n*o);
    ar[1]=m*(n+o);
    ar[2]=m*n*o;
    ar[3]=(m+n)*o;
    ar[4]=m+n+o;

    sort(ar,ar+5);
    printf("%d\n",ar[4]);

    return 0;
}