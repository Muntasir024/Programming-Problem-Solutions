#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n, t, m, i;
    scanf("%ld", &t);
    while(t--)
    {
        scanf("%ld %ld", &n, &m);
        int a[n+2], c = 0;
        unordered_map <long, bool> mp;
        for(i=0; i<n; i++) {scanf("%ld", &a[i]);mp[a[i]]=true;}
        for(i=0; i<n; i++)
        {
            if(mp[m - a[i]])
                ++c;
        }
        printf("%ld\n", c/2);
    }
    //main();
}
