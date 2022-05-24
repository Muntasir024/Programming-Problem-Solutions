#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

ll vis[100007];
vector <ll > adj[100007];
ll maxD = 0, maxNode = 0;

void DFS(ll node, ll dis) {
    vis[node] = 1;
    if(maxD < dis) {
        maxD = dis;
        maxNode = node;
    }

    for(ll child : adj[node]) {
        if(!vis[child]) DFS(child, dis+1);
    }
}

int main() {
    ll n, m, a, b, i;
    scanf("%lld", &n);
    for(i=1; i<=n; i++) adj[i].clear(), vis[i] = 0;
    for(i=1; i<n; i++) {
        scanf("%lld %lld", &a, &b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    DFS(1, 0);
    for(i=1; i<=n; i++) vis[i] = 0;
    DFS(maxNode, 0);
    printf("%lld\n", maxD);
}

