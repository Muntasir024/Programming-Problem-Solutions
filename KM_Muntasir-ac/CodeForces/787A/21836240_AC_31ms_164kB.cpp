#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d, i, x;
    map <long long , bool> m;
    cin>>a>>b;
    cin>>c>>d;
    for(i=0;i<=100;i++)
    {
        x= b+(i*a);
        m[x]=true;
    }
    for(i=0;i<=100;i++)
    {
        x= d+(i*c);
        if(m[x])
        {
            cout<<x<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
