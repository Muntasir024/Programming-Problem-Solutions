#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,l,n,t,c,j;
    string s;
    char p[11] = {'A','H','I','M','O','T','U','V','W','X','Y'};
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>s;
        l=1;
        c=0;
        for(i=0;i<s.length();i++)
        {
            for(j=0;j<11;j++)
            {
                if(s[i] == p[j])
                    c++;
            }
        }
        //cout<<c<<"-"<<endl;
        if(c == s.length())
            {
                n=s.length();
                for(i=0;i<n/2;i++)
                {
                    if(s[i] != s[n-i-1])
                    {
                        l=0;
                        break;
                    }
                }
                //cout<<l<<"-"<<endl;
            }
        else
        {
            l=0;
        }
        if(l==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }

    return 0;
}
