#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,p;
    int i,mx=0,c;
    while(cin>>s)
    {
        c=0;
        if(s == "E-N-D")
            break;
        for(i=0; i<s.size(); i++)
        {
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z') || s[i]=='-')
                ++c;
        }
        if(c > mx)
        {
            mx=c;
            p=s;
        }
    }
    int l=p.size();
    for(i=0; i<l; i++)
    {
        if(p[i]>='A' && p[i]<='Z')
            printf("%c",p[i]+32);
        else if(p[i]>='a' && p[i]<='z' || p[i]=='-')
            printf("%c",p[i]);
    }
    printf("\n");
    return 0;
}
