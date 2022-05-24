#include<bits/stdc++.h>
using namespace std;

vector <int > ar[1000001];
vector <int > order;

int vis[1000001];

void dfs(int node) {
    vis[node] = 1;

    for(int child : ar[node])
        if(!vis[child])
            dfs(child);
    order.push_back(node);
}

void dfs1(int node) {
    vis[node] = 1;

    for(int child : ar[node])
        if(!vis[child])
            dfs1(child);
}

int main() {
    int t, n, m, a, b, res, tc = 1;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &m);
        order.clear();
        for(int i=0;i<=n;i++) ar[i].clear(), vis[i]=0;

        for(int i=1;i<=m;i++) {
            scanf("%d %d", &a, &b);

            ar[a].push_back(b);
        }

        for(int i=1;i<=n;i++)
            if(!vis[i])
                dfs(i);
        for(int i=0;i<=n;i++) vis[i]=0;

        res = 0;
        for(int i = order.size() - 1; i >= 0; i--) {
            if(!vis[order[i]]) {
                dfs1(order[i]);
                res++;
            }
        }

        printf("Case %d: %d\n", tc++, res);
    }
    return 0;
}
