#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,x,n,c=0;
    string s;
    char b[1007][1007], a[1007][1007];
    cin>>n;
    cin.ignore();
    cin>>s;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    x = s.size();
    for(k=0; k<x; k++)
    {
        if(s[k]=='R')
            c++;
        else
            c+=3;
    }
    c%=4;

    for(k=1; k<=c; k++)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                b[i][j] =a[i][j];
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(b[n-j-1][i] == '<')
                    a[i][j]='^';
                else if(b[n-j-1][i] == '^')
                    a[i][j]='>';
                else if(b[n-j-1][i] == '>')
                    a[i][j]='v';
                else if(b[n-j-1][i] == 'v')
                    a[i][j]='<';
                else a[i][j]='.';
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}