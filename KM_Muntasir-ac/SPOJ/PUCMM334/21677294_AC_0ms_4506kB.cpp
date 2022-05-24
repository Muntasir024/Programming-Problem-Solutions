#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, x, c=0;
    scanf("%d", &n);
    int a[n+2];
    vector <int > v;
    map <int, int> m;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        if(m[a[i]]==0)
        {
            c++;
            v.push_back(a[i]);
        }
        m[a[i]]++;
    }

    if(c==1 | c==2)
    {
        if(c==1)
        {
            if(v[0]==n-1) printf("%d\n", n);
            else if(v[0]==0) printf("0\n");
            else printf("-1\n");
        }
        else
        {
            sort(v.begin(), v.end());
            if(v[0]==0 && v[1]==1) printf("-1\n");
            else if(v[1]==m[v[0]]) printf("%d\n", v[1]);
            else printf("-1\n");
        }
    }
    else
        printf("-1\n");
    //main();
    return 0;
}

