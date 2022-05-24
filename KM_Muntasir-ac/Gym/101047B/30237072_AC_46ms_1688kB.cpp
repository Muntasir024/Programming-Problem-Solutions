#include<bits/stdc++.h>
using namespace std;

long long palin(long long n, long long a)
{
    long long c, i=0, j, s[200000];
    c = n;
    while(c)
    {
        s[i]=(c%a);
        c = c / a;
        i++;
    }
    i--;

    for(j=0;j<i;j++)
    {
        if(s[j] != s[i-j]) return 0;
    }
    return 1;
}

int main()
{
    long long t, c, d, i, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector <long long > v;
        for(i=2;i<=16;i++)
        {
            if(palin(n,i)) v.push_back(i);
        }
        if(v.size()==0) cout<<"-1";
        else{
        for(i=0;i<v.size();i++) cout<<v[i]<<" ";}
        cout<<endl;
    }
}
