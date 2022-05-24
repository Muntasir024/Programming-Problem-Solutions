#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, n, m, c;
    string s, p, num;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cin.ignore();
        cin>>p;
        cin>>num;
        cin>>s;
        map <char, int> mp;
        map <char, bool> b;
        for(i=0;i<n;i++)
        {
            if(b[p[i]])
            {
                c = min(mp[p[i]], num[i]-'0');
                mp[p[i]]=c;
            }
            else
            {
                mp[p[i]]=num[i]-'0';
            }
            if(b[p[i]]==false) b[p[i]]=true;
        }
        c=0;
        for(i=0;i<m;i++)
        {
            if(b[s[i]]==false)
            {
                c=-1;
                break;
            }
            c+= mp[s[i]];
        }

        cout<<c<<endl;
    }
    return 0;
}
