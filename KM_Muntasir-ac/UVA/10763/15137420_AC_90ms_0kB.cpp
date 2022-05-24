#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, l, x, y, f;
    while(scanf("%d", &n) && n)
    {
        map <int, int> a;
        map <int, int> b;
        vector <int> v;
        l = f = 0;
        while(n--)
        {
            scanf("%d%d", &x, &y);
            if(a[x] == 0 || b[x] == 0){
                v.push_back(x);
                ++l;
            }
            if(a[y] == 0 || b[y] == 0){
                v.push_back(y);
                ++l;
            }
            a[x]++;
            b[y]++;
        }
        for(i = 0; i < l; i++)
        {
            if(a[v[i]] != b[v[i]])
            {
                f = 4;
                break;
            }
        }
        if(f) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
