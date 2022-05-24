#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a[4];
    string s;
    map <int,int> mp;
    cin>>n;
    cin.ignore();
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        mp[s[i]-'0']=1;
    }
    a[0]=mp[0]+mp[1]+mp[4]+mp[7];
    a[1]=mp[0]+mp[3]+mp[6]+mp[9];
    a[2]=mp[1]+mp[2]+mp[3];
    a[3]=mp[0]+mp[7]+mp[9];

    if(a[0]!=0 && a[1]!=0 && a[2]!=0 && a[3]!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
