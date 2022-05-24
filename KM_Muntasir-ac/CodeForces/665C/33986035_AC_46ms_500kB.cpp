#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int l, i, j, f=0;
    cin>>s;
    l = s.size();
    for(i=1; i < l; i++)
    {
        if(s[i-1] == s[i])
        {
            for(j='a'; j<='z'; j++)
            {
                if(j!= s[i-1] && j!=s[i+1] && j!=s[i])
                {
                    s[i]=j;
                    break;
                }
            }
        }
    }
    cout<<s<<endl;
    return 0;
}