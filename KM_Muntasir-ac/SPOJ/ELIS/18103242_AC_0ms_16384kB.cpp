#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, c = 0;
    cin >> n;
    int a[n+2], b[n+2];
    b[0]=0;
    for(i=1; i<=n; i++)
        b[i]=1;
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j < i; j++)
        {
            if(a[i] > a[j])
            {
                b[i] = max(b[i], 1+b[j]);
            }
        }
        c = max(c,b[i]);
    }
    cout << c << endl;

    return 0;
}
