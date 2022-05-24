#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,r;
    int n,i,c,p;
    while(scanf("%d",&n)==1 && n)
    {
        cin>>s;
        p=s.length();
        p=p/n;
        for(i=0;i<s.length();i+=p)
        {
            r = s.substr(i,p);
            reverse(r.begin(),r.end());
            cout<<r;
        }
        cout<<endl;
    }

    return 0;
}
