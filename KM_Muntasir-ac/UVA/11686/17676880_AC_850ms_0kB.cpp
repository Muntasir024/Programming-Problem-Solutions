#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    while(cin >> n >> m && n && m)
    {
        int d[n+2];
        vector<int> adj[n+2];

        memset(d, 0, sizeof(d));

        int u, v;
        while(m--)
        {
            cin >> u >> v;
            adj[u].push_back(v);
            ++d[v];
        }

        priority_queue<int, vector<int>, greater<int> >q;
        vector<int> solution;

        for(int i = 1; i <= n; ++i)
        {
            if(d[i] == 0)
                q.push(i);
        }

        while(!q.empty())
        {
            u = q.top();
            q.pop();
            solution.push_back(u);

            for(unsigned i = 0; i < adj[u].size(); ++i)
            {
                v = adj[u][i];
                --d[v];
                if(d[v] == 0)
                    q.push(v);
            }
        }
        if(solution.size() != n)
            cout << "IMPOSSIBLE" << endl;
        else
        {
            for(int i = 0; i < n; ++i)
            {
                cout << solution[i] << endl;
            }
        }
    }

    return 0;
}
