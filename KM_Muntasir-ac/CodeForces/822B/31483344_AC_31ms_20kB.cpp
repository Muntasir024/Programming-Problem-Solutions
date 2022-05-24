#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, ans = INT_MAX, i, j, cnt, x;
    string s, t;
    vector <int > v, res;
    cin>>n>>m>>s>>t;


    for(i=0; i<=m-n; i++)
    {
        cnt = 0;
        x=i;
        v.clear();

        for(j=0; j<n; j++, x++) if(s[j]!=t[x]) {
                cnt++;
                v.push_back(j+1);
        }
        if(cnt < ans)
        {
            ans = cnt;
            res = v;
        }
    }

    cout<<ans<<endl;
    for(j=0;j<res.size();j++)
        cout<<res[j]<<' ';
    cout<<endl;
    return 0;
}
