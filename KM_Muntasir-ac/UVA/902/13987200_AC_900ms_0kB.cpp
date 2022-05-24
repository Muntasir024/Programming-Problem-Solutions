#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,mx;
    string s,p;
    while(scanf("%d",&n) != EOF)
    {
        getchar();
        cin>>s;
        map <string, int> m;
        mx=0;
        for(i=0;i<s.size()-n+1;i++)
        {
            p = s.substr(i,n);
            //cout<<p<<endl;
            m[p]++;
            if(mx < m[p]) mx = m[p];
            //cout<<s<<endl;
        }
        //cout<<mx<<endl;
        for(i=0;i<s.size()-n+1;i++)
        {
            p = s.substr(i,n);
            if(mx == m[p])
            {
                cout<<p<<endl;
                break;
            }
        }
    }
    return 0;
}
