#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, x, c = 0;
    map <int, int> m;
    cin>>n;
    int a[n+2];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]!=a[a[i]] && i!=a[a[i]])
        {
            x=a[a[i]];
            if(a[i]==a[a[x]] && x!=a[x])
            {
                c=1;
                break;
            }
        }
    }
    if(c)
        cout<< "YES" <<endl;
    else
        cout<< "NO" <<endl;

    return 0;
}
