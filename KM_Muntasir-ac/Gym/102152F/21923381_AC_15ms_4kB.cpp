#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, t, c, x, i;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>s;
        x=s.size();
        c=1;
        for(i=1;i<x;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                c++;
        }
        if(c>7) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
