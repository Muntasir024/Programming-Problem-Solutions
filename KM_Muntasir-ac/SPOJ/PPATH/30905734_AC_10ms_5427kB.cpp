#include<bits/stdc++.h>
using namespace std;

vector <int > adj[10007];
vector <int > prime;
int vis[10007], dist[10007];

bool isPrime(int n) {
    for(int i=2;i*i<=n;i++) if(n % i == 0) return false;

    return true;
}

void build() {
    for(int i=1000;i<=9999;i++) {
        if(isPrime(i)) prime.push_back(i);
    }
    int l = prime.size();
    for(int i=0;i<l;i++) {
        for(int j=i+1;j<l;j++) {
            int a = prime[i];
            int b = prime[j];
            int cnt = 0;
            while(a) {
                if((a%10) != (b%10)) cnt++;
                a/=10, b/=10;
            }
            a = prime[i];
            b = prime[j];
            if(cnt == 1) {
                adj[a].push_back(b);
                adj[b].push_back(a);
            }
        }
    }
}

void BFS(int node) {
    vis[node] = 1;
    dist[node] = 0;
    queue <int > q;
    q.push(node);

    while(!q.empty()) {
        int d = q.front();
        q.pop();

        for(int c : adj[d]) {
            if(!vis[c]) {
                vis[c] = 1;
                dist[c] = dist[d] + 1;
                q.push(c);
            }
        }
    }
}

int main() {
    int t, a, b;
    scanf("%d",&t);
    build();
    while(t--) {
        scanf("%d %d", &a, &b);

        for(int i=1000;i<=9999;i++) dist[i] = -1, vis[i] = 0;
        BFS(a);

        if(dist[b] == (-1)) printf("Impossible\n");
        else                printf("%d\n",dist[b]);
    }
    return 0;
}
