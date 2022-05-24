#include<bits/stdc++.h>
using namespace std;

int in[100001], low[100001], vis[100001], timer;
vector <int > adj[100001];
vector <pair<int, int> > res;
bool bridge;

void DFS(int node, int par) {
    in[node] = low[node] = timer++;
    vis[node] = 1;

    for(int child : adj[node]) {
        if(child == par) continue;

        if(vis[child]) {
            low[node] = min(low[node], in[child]);
            if(in[node] > in[child]) res.push_back({node, child});
        }
        else {
            DFS(child, node);
            if(low[child] > in[node]) {
                bridge = true;
                return;
            }
            low[node] = min(low[node], low[child]);
            res.push_back({node, child});
        }
    }
}

int main() {
    int n, m, a, b, i;
    scanf("%d %d", &n, &m);
    while(m--) {
        scanf("%d %d", &a, &b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    DFS(1, -1);
    if(bridge) printf("0\n");
    else {
        for(i=0;i<res.size();i++) {
            printf("%d %d\n", res[i].first, res[i].second);
        }
    }
}
