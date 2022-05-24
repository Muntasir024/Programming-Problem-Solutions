#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, i, j, k, ans = 0;

    while(scanf("%d", &n) && n)
    {
        int a[n+2], ans = 0;
        for(i=0; i<n; i++) scanf("%d", &a[i]);
        sort(a, a+n);
        for(i=2; i<n; i++)
        {
            j = 0, k = i-1;
            while(j < k)
            {
                if(a[j]+a[k] < a[i])
                {
                    ans += (k - j);
                    j++;
                }
                else
                    k--;
            }
        }
        printf("%d\n", ans);
    }
    //main();
}
