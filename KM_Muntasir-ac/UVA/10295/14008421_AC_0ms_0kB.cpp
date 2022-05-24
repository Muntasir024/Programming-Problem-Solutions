#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,i,c,x,k;
    string s,p;
    cin>>n>>m;
    cin.ignore();
    map <string, long long> mp;
    while(n--)
    {
        cin>>s;
        cin>>x;
        cin.ignore();
        mp[s]=x;
    }
    while(m--)
    {
        c=0;
        while(true)
        {
            cin>>s;
            if(s[0] == '.') break;
            c += mp[s];
        }
        cout<<c<<endl;
    }
    return 0;
}
