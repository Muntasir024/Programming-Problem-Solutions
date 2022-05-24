#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i,c=1,l;string s,p;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin, s);
        getline(cin, p);
        if(s == p)
            cout<<"Case "<<c++<<": Yes"<<endl;
        else
        {
            l=s.size();
            for(i=0;i<l;i++)
            {if(s[i]==' '){s.erase(i,1);i=-1;}}
            if(s!=p)cout<<"Case "<<c++<<": Wrong Answer"<<endl;
            else cout<<"Case "<<c++<<": Output Format Error"<<endl;
        }}}

