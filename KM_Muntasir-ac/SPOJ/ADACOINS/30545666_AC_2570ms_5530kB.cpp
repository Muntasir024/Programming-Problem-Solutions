#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, i, c, x, y;
    scanf("%d %d", &n, &q);
    int a[n+2], sum[100007];
    bitset<100007> bt;
    map <int, int> mp;

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        mp[a[i]]++;
    }
    bt[0] = 1;
    for(i=0;i<n;i++)
    {
        if(mp[a[i]] != 0)
        {
            mp[a[i]]--;
            bt |= (bt << a[i]);
            //cout << a[i] << "--" << bt[i] << endl;
        }
    }

    for(i=1;i<=100001;i++) sum[i] = sum[i-1] + bt[i];

    while(q--)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n", sum[y]-sum[x-1]);
    }
    //main();
    return 0;
}

