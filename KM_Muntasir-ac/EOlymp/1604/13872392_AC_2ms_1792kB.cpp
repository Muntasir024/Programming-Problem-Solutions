#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,c,sum=-1;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='0' || s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8')
        {
            sum = sum * (s[i]-'0');
        }
    }
    if(sum == -1)
        cout<<sum<<endl;
    else
        cout<<sum*(-1)<<endl;
    return 0;
}
