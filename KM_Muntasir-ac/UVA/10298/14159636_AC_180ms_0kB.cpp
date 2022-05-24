#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, t, mx, i;
    string s;
    while(getline(cin, s))
    {
        mx=1;
        if(s == ".")
            break;
        m = s.size();
        for(i=1; i<m; i++)
            while(s[i]!=s[i%mx])
                ++mx;
        if(m%mx == 0)
            cout<<(m/mx)<<endl;
        else
            cout<<"1"<<endl;
    }
}
