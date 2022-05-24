#include<bits/stdc++.h>
using namespace std;

int visited[77];
vector <int > arr[77];

void dfs(int s,int length)
{
    visited[s]=length;

    for(int i=0;i<arr[s].size();i++)
    {
        if(visited[arr[s][i]]==0)
        {
            dfs(arr[s][i],length);
        }
    }
}

int main()
{
    int t, i, x, c, n;
    char s[5];
    scanf("%d\n\n", &t);

    while(t--)
    {
        gets(s);
        n = s[0]-64; c = 0;
        for(i = 0; i <= 77; i++) arr[i].clear(),visited[i] = 0;
        while(gets(s) && s[0]!='\0')
        {
            int n1=s[0]-64, n2=s[1]-64;

            arr[n1].push_back(n2);
            arr[n2].push_back(n1);
        }

        for(i=1;i<=n;i++)
        {
            if(visited[i] == 0)
            {
                c++;
                dfs(i, 5);
            }
        }
        printf("%d\n", c);
        if(t) printf("\n");
    }
    return 0;
}
