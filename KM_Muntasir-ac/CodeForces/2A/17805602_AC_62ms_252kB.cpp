#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, mx = -100000000000, x[1007];
    map <string, int > mp, m;
    cin >> n;
    string s[n+2], p = "";
    for(i=0; i<n; i++)
    {
        cin >> s[i];
        cin >> x[i];
        m[s[i]]+=x[i];
    }
    for(i=0;i<n;i++)
    {
        if(m[s[i]] > mx)
        {
            mx = m[s[i]];
        }
    }
    for(i=0; i<n; i++)
    {
        mp[s[i]]+=x[i];
        if(mp[s[i]] >= mx&&m[s[i]]>=mx)
        {
            cout << s[i] << endl;
            return 0;
        }
    }
}
