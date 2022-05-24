#include<bits/stdc++.h>
using namespace std;
vector <int > g[101];
bool vis[101] , onStack[101];
int in[101] , low[101];
stack<int> st;
string ss[101];
map <string, int> mp;
map <int, string> ans;

int timer = 1 , SCC = 0;

void dfs(int node)
{
	vis[node] = 1;
	in[node] = low[node] = timer++;
	onStack[node] = true;
	st.push(node);

	for(int u : g[node])
	{
		if((vis[u] == true) && (onStack[u] == true))
		{
			low[node] = min(low[node] , in[u]);
		}
		else
		if(vis[u] == false)
		{
			dfs(u);

			if(onStack[u] == true)
			low[node] = min(low[node] , low[u]);
		}
	}

	if(in[node] == low[node])
	{
		while(1)
		{
			int u = st.top();
			st.pop() , onStack[u] = false;

			if(u == node) {
                cout << ans[u] << endl;
                break;
			}
			else cout << ans[u] << ", ";
		}
		SCC++;
	}
}

int main()
{
    int n, m, x, y, tc = 1;
    bool flag = false;
    string a, b;
    while(scanf("%d %d", &n, &m) && n && m)
    {
        for(int i=1, j=1; i<=m; i++)
        {
            cin.ignore();
            cin >> a >> b;
            if(mp[a]) x = mp[a];
            if(!mp[a]) x = j, mp[a] = j, ans[j] = a, j++;
            if(mp[b]) y = mp[b];
            if(!mp[b]) y = j, mp[b] = j, ans[j] = b, j++;
            g[x].push_back(y);
        }
        if(!flag) flag=true;
        else printf("\n");

        printf("Calling circles for data set %d:\n", tc++);
        for(int i=1; i<=n; i++)
            if(vis[i] == false) dfs(i);

        for(int i=1; i<=n; i++) vis[i] = onStack[i] = false, g[i].clear();
        SCC = timer = 0;
        mp.clear();
        ans.clear();
        while(!st.empty()) st.pop();
    }
}
