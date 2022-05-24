#include<bits/stdc++.h>
using namespace std;

int a[77];

int dfs(int x)
{
    if(a[x]==x)
        return x;
    return a[x] = dfs(a[x]);
}

int main()
{
    int t, i, x, c, n;
    char s[5];
    scanf("%d\n\n", &t);

    while(t--)
    {
        gets(s);
        n = s[0]-64; c = 0;
        for(i = 0; i <= n; i++) a[i]=i;
        while(gets(s) && s[0]!='\0')
        {
            int n1=s[0]-64, n2=s[1]-64;
            if(dfs(n1) != dfs(n2))
            {
                a[dfs(n1)]=dfs(n2);
                n--;
            }
        }
        printf("%d\n", n);
        if(t) printf("\n");
    }
    return 0;
}
