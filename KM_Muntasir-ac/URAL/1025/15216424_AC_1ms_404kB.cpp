#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, s = 0;
    scanf("%d",&n);
    int a[n+2];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    n = (n/2) + 1;
    for(i=0;i<n;i++) s += (a[i]/2)+1;
    printf("%d\n",s);
}
