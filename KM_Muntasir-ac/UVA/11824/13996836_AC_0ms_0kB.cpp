#include<bits/stdc++.h>
using namespace std;

long pw(int n,int p)
{
    int d=1;
    for(int i=1;i<=p;i++)
    {
        d = d * n;
    }
    return d;
}

int main()
{
    int t,x,l,i,n;
    cin>>t;
    while(t--)
    {
        vector <int> v;
        x=l=0;
        while(1)
        {
            cin>>n;
            if(n) v.push_back(n);
            else break;
        }
        sort(v.begin(), v.end(), std::greater<int>());
        for(i=0;i<v.size();i++)
        {
            n= ( 2 * pw(v[i],i+1));
            //cout<<n<<"______"<<endl;
            x += n;
            if(x > 5000000)
            {
                l=1;
                break;
            }
        }
        if(l)
            cout<<"Too expensive"<<endl;
        else
            cout<<x<<endl;
    }
    return 0;
}
