#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,i,cnt=0,len,m[128];
    char str[105];
    cin>>l;
    cin>>str;
    len=strlen(str);
    memset(m, 0, sizeof(m));
    strlwr(str);
    for(i=0; i<len; i++)
    {
            m[str[i]]=1;
    }
    for(i=0;i<len;i++) {
        if(m[str[i]] != 0) {
            cnt++;
            m[str[i]]=0;
        }
    }
    if(cnt==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
