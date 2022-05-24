#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,cnt=0,mx=0;
    string s;

    cin>>n;
    cin.ignore();
    getline(cin,s);
    s[s.length()]=' ';
    for(i=0;i<=s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            ++cnt;
        }
        else if(s[i] == ' ')
        {
            if(cnt>mx)
                mx=cnt;
            cnt=0;
        }
    }
    cout<<mx<<endl;

    return 0;
}
