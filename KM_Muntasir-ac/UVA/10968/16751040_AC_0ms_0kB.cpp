#include <iostream>
#include <cstring>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <queue>

using namespace std;

int n, m;
vector<int> g[1010];
int du[1010];
int cnt[1010];
int st, ed;

bool solve()
{
    st = ed = 0;
    for (int i = 1; i <= n; i++)
    {
        if (du[i] == 0 || du[i] == 1) return false;
        if (du[i] % 2 == 1)
        {
            if (st == 0) st = i;
            else ed = i;
        }
    }

    if (st == 0)
    {
        printf("0\n");
        return true;
    }

    memset(cnt, -1, sizeof(cnt));
    memset(cnt, -1, sizeof(cnt));
    memset(cnt, -1, sizeof(cnt));
    queue<int> q;
    while (!q.empty()) q.pop();
    q.push(st);
    cnt[st] = 0;

    while (!q.empty())
    {
        int tp = q.front();q.pop();
        if (tp == ed)
        {
            printf("%d\n",cnt[tp]);
            return true;
        }
        for (int i = 0; i < g[tp].size(); i++)
        {
            int tt = g[tp][i];
            if (du[tt] == 2) continue;
            if (cnt[tt] != -1) continue;
            cnt[tt] = cnt[tp] + 1;
            q.push(tt);
        }
    }
    return false;
}

int main()
{
    while (~scanf("%d%d", &n, &m) && n)
    {
        memset(du,0,sizeof(du));
        for (int i = 0; i <= n; i++) g[i].clear();
        int a, b;
        while (m--)
        {
            scanf("%d%d", &a, &b);
            du[a]++; du[b]++;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        if (!solve()) printf("Poor Koorosh\n");
    }
    return 0;
}
