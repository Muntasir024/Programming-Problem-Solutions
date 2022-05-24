#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    string s;
    getline(cin,s);
    for(i=0; i<s.size()-1; i++)
    {
        if(s[i+1]==' ' && s[i]==' ')
        {
            s.erase(i,1);
            i=-1;
        }
    }
    for(i=0; i<s.size()-1; i++)
    {
        if(s[i]==' ')
        {
            if(s[i+1]=='.'||s[i+1]==','||s[i+1]=='!'||s[i+1]=='?')
            {
                s.erase(i,1);
                i=-1;
            }
        }
    }

    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='.'||s[i]==','||s[i]=='!'||s[i]=='?')
        {
            cout<<s[i];
            if(s[i+1] != ' ')
                cout<<" ";
        }
        else
            cout<<s[i];
    }
    cout<<endl;
}
