#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,e,f,c,s;
    cin>>t;
    while(t--)
    {
        cin>>e>>f>>c;
        s=0;
        e+=f;
        while(e>=c)
        {
            s = s + (e/c);
            e = (e / c) + (e%c);
        }
        cout<<s<<endl;
    }

    return 0;
}
