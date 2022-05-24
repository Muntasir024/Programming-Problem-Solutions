#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);
    int indegree[n+1];
    vector<int> adjList[n+1];

    memset(indegree, 0, sizeof(indegree));

    int u, v;
    while(m--)
    {
        scanf("%d %d", &u, &v);
        adjList[u].push_back(v);
        ++indegree[v];
    }

    priority_queue<int, vector<int>, greater<int> >q;
    vector<int> solution;

    for(int i = 1; i <= n; ++i)
    {
        if(indegree[i] == 0)
            q.push(i);
    }

    while(!q.empty())
    {
        u = q.top();
        q.pop();
        solution.push_back(u);

        for(unsigned i = 0; i < adjList[u].size(); ++i)
        {
            v = adjList[u][i];
            --indegree[v];
            if(indegree[v] == 0)
                q.push(v);
        }
    }
    if(solution.size() != n)
        cout << "Sandro fails." << endl;
    else
    {
        for(int i = 0; i < n; ++i)
        {
            printf("%d ", solution[i]);
        }
        printf("\n");
    }

    return 0;
}

