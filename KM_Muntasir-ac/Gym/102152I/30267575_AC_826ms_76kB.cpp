#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n, i, c = 0,x, y, k, ps = 0, ng = 0;
        cin>>n>>k;
        long long a[n+2];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i] >= 0) ps++;
            else ng++;
        }
        //cout<<"ascha"<<endl;
        sort(a, a+n);
        //for(i=0;i<ng;i++) cout<<neg[i]<<endl;
        //cout<<"ascha"<<endl;
        if(ng<k)
        {
            for(i=0; i<ng; i++) a[i] = a[i]*(-1);
            sort(a, a+n);
            for(i=0; i<k-ng; i++) a[0]*=(-1);
            for(i=0; i<n; i++) c+=a[i];
            cout<<c<<endl;
        }
        else if(ng>=k)
        {
            for(i=0; i<n; i++)
            {
                if(i<k)
                {
                    c += (a[i]*(-1));
                }
                else c += a[i];
            }
            cout<<c<<endl;
        }
    }

}
