#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, s, tc=1;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int a[n+2], b[n+2], c[n+2];
        int a1[n+2], b1[n+2], c1[n+2];
        a1[0]=b1[0]=c1[0]=0;
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d", &a[i], &b[i], &c[i]);
            if(i)
            {
                a1[i] = min(a[i]+b1[i-1], a[i]+c1[i-1]);
                b1[i] = min(b[i]+a1[i-1], b[i]+c1[i-1]);
                c1[i] = min(c[i]+b1[i-1], c[i]+a1[i-1]);
            }
            else
            {
                a1[i] = a[i];
                b1[i] = b[i];
                c1[i] = c[i];
            }
        }
        cout << "Case " << tc++ << ": ";
        //cout << a1[n-1] << endl;
        //cout << b1[n-1] << endl;
        //cout << c1[n-1] << endl;
        cout << min(a1[n-1], min(b1[n-1], c1[n-1])) << endl;
    }
}
