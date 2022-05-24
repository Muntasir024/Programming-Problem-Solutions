#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, l;
    string s, s1, p;
    map <string, string> m;
    map <string, bool> n;
    while(getline(cin, s))
    {
        if(s == "") break;
        l = i = s.size();
        --i;
        while(i--) if(s[i] == ' ') break;
        s1 = s.substr(0, i);
        l = l - i + 1;
        p = s.substr(i+1, l);
        m[p] = s1;
        n[p] = 1;
    }
    while(cin>>s)
    {
        if(n[s])
            cout<<m[s]<<endl;
        else
            cout<<"eh"<<endl;
    }
    return 0;
}
