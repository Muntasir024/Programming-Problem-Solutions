#include<bits/stdc++.h>
using namespace std;

const int MAX = 5e4 + 5;
int id[MAX], nodes, edges, f;
pair <long long, pair<int, int> > p[MAX];

void initialize()
{
    f = 1;
    for(int i = 0; i <= nodes; ++i)
        id[i] = i;
}

int root(int x)
{
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}

int main()
{
    int x, y;
    long long weight, cost;
    while(scanf("%d %d", &nodes, &edges) && nodes)
    {
        initialize();
        vector <long long > v;
        for(int i = 0; i < edges; ++i)
        {
            cin >> x >> y >> weight;
            p[i] = make_pair(weight, make_pair(x, y));
        }
        sort(p, p + edges);
        for(int i = 0; i < edges; ++i)
        {
            x = p[i].second.first;
            y = p[i].second.second;
            cost = p[i].first;
            if(root(x) != root(y))
            {
                union1(x, y);
            }
            else
            {
                v.push_back(cost);
            }
        }
        if(v.size())
        {
            cout << v[0];
            for(int i=1; i<v.size(); i++)
            {
                cout << " " <<v[i];
            }
            cout << endl;
        }
        else cout << "forest" << endl;
    }
    return 0;
}
