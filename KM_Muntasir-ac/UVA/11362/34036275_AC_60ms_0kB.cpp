#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, m, n, c;
    string s, a[10007];
    scanf("%d", &n);
    while(n--)
    {
        c=0;
        scanf("%d", &m);
        for(i=0;i<m;i++)
        {
            cin >> s;
            a[i] = s;
        }
        sort(a, a+m);
        for(i=0;i<m;i++)
        {
            k = a[i].size();
            if(a[i+1].substr(0,k) == a[i])
            {
                printf("NO\n");
                c=1;
                break;
            }
        }
        if(!c) printf("YES\n");
    }
}
