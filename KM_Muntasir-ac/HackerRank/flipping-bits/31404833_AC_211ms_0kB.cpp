#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, mx=0;
    cin>>n;
    while(n--)
    {
        scanf("%lld", &t);
        printf("%lld\n", t^(0xFFFFFFFF));
    }
    //main();
    return 0;
}