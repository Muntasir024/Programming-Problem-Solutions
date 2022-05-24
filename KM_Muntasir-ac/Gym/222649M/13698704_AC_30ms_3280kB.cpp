#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,c=0,l=0,k=0,x=0,ans=0;
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='A' && ans==0)
            ++c;
        else if(s[i-1]=='A' && s[i]=='!')
        {
            ans=c;
            l++;
            c=-1;
        }
        else if(s[i]=='!' && c==-1)
            l++;
    }
    if(ans+l == s.length() && ans != 0 && l != 0)
        cout<<"Panic!"<<endl;
    else
        cout<<"No panic"<<endl;
    return 0;
}
