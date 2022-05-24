#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x,l;
    while(cin>>n,n)
    {
        vector <int> v;
        for(i=1; i<=n; i++)
        {
            cin>>x;
            if(x>0)
                v.push_back(x);
        }
        l = v.size();
        if(!l) cout<<'0';
        else
        {
            for(i=0; i<l; i++)
            {
                cout<<v[i];
                if(l-1 != i)
                    cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
