#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, o, z, oo, zz, k, x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        o = z = oo = zz = 0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x%2)
            {
                o++;
                if(i%2==0) zz++;
            }
            else
            {
                z++;
                if(i%2) oo++;
            }
        }
        if(n%2)
        {
            k = n/2;
            if((k+1)==z && k==o) cout<< max(oo,zz) <<endl;
            else cout<<"-1"<<endl;
        }
        else
        {
            k = n/2;
            if(k==z && k==o) cout<< max(oo,zz) <<endl;
            else cout<<"-1"<<endl;
        }
    }
    //main();
    return 0;
}
