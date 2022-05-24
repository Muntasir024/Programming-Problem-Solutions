#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, l, i;
    map <int, int> m;
    vector <int > v;

    while(scanf("%d", &x) == 1)
    {
        m[x]++;
        if(m[x] == 1)
            v.push_back(x);
    }
    l = v.size();
    for(i=0; i<l; i++)
        printf("%d %d\n", v[i], m[v[i]]);
    return 0;
}
