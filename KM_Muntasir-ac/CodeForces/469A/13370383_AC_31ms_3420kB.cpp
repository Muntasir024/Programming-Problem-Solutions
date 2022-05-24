#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x,p,c=0,q;
    map <int, int> m;
    cin>>n;
    cin>>p;
    for(i=0; i<p; i++)
    {
        cin>>x;
            m[x]++;
    }
    cin>>q;
    for(i=0; i<q; i++)
    {
        cin>>x;
            m[x]++;
    }

    if(m.size()==n)
        cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}

