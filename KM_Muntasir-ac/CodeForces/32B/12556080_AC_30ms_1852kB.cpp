#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[210];
    long i,len;
    cin>>str;
    len=strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i]=='.')
            cout<<'0';
        else if(str[i]=='-' && str[i+1]=='.')
        {
            cout<<'1';
            i=i+1;
        }
        else if(str[i]=='-' && str[i+1]=='-')
        {
            cout<<'2';
            i=i+1;
        }
    }
    cout<<endl;

    return 0;
}
