#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,x,c=1,mx=0;
    string s;
    map <int, int> m;
    for(i=97; i<123; i++)
    {
        cin>>x;
        cin.ignore();
        m[i]=x;
    }
    getline(cin,s);
    for(i=0; i<s.length(); i++)
    {
        if(m[s[i]] != 0)
        {
            if(m[s[i]]>mx)
                mx=m[s[i]];
            //cout<<m[s[i]]<<endl;
            m[s[i]] = 0;
        }
    }
    cout<<mx*s.length()<<endl;

    return 0;
}
