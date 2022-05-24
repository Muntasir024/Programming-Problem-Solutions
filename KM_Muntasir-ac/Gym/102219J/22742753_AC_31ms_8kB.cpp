#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m=5;
    int indegree[10];
    vector<int> adjList[10];
    string s, a="";

    memset(indegree, 0, sizeof(indegree));

    int u, v;
    while(m--)
    {
        cin >> s;

        if(s[1] == '<')
        {
            adjList[s[0]-'A'].push_back(s[2]-'A');
            ++indegree[s[2]-'A'];
        }
        else
        {
            adjList[s[2]-'A'].push_back(s[0]-'A');
            ++indegree[s[0]-'A'];
        }
    }

    queue<int> q;

    for(int i = 0; i < 5; ++i)
    {
        if(indegree[i] == 0)
            q.push(i);
    }

    while(!q.empty())
    {
        u = q.front();
        q.pop();
        a += (u+'A');

        for(unsigned i = 0; i < adjList[u].size(); ++i)
        {
            v = adjList[u][i];
            --indegree[v];
            if(indegree[v] == 0)
                q.push(v);
        }
    }


    if(a.size() == 5)
        cout << a << endl;
    else
        cout<< "impossible" <<endl;

    return 0;
}