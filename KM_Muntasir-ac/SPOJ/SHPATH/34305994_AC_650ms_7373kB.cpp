#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pr;

vector<vector<pr> >lis;
int t, n, e, q, a, b;


int dijk(int src, int des)
{
    priority_queue<pr>que;
    que.push(make_pair(0, src));
    vector<int>cost(n + 5, 1000000000);
    int nd, ed, ln;
    cost[src] = 0;
    while(1)
    {
        nd = (que.top()).second;
        ed = -(que.top()).first;
        if (nd == des)return ed;
        que.pop();
        if (cost[nd] < ed)continue;
        ln = lis[nd].size();

        for(int i=0;i<ln;i++)
        {
            int x = lis[nd][i].first;
            int y = lis[nd][i].second;
            if (ed + x < cost[y])que.push(make_pair(-(cost[y] = ed + x), y));
        }
    }
}
int main()
{
    char s1[20], s2[20];
    cin >> t;
    while(t--)
    {
        cin >> n;
        map<string, int>val;
        lis = vector<vector<pr> >(n + 5);
        for(int i=1;i<=n;i++)
        {
            scanf("%s%d", s1, &e);
            val[s1] = i;
            while(e--)
            {
                cin >> a >> b;
                lis[i].push_back(make_pair(b, a));
            }
        }
        cin >> q;
        while(q--)
        {
            scanf("%s%s", s1, s2);
            printf("%d\n", dijk(val[s1], val[s2]));
        }
    }
    return 0;
}
