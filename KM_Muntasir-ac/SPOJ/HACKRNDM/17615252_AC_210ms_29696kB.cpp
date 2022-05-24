#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, k, c = 0;
    scanf("%d %d", &n, &k);
    int a[n+2];
    map <int, bool> m;
    for(i=0;i<n;i++) {scanf("%d", &a[i]);m[a[i]] = true;}
    for(i=0;i<n;i++)
    {
        if(m[a[i]-k])
            ++c;
        if(m[a[i]+k])
            ++c;
    }
    printf("%d\n", c/2);

    return 0;
}
