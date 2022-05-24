#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,k,l,x,i;
    cin>>k;
    for(tc=1;tc<=k;tc++)
    {
        l=1;
        for(i=0;i<13;i++)
        {
            cin>>x;
            if(x == 0)
                l=0;
        }
        if(l==1)
        cout<<"Set #"<<tc<<": Yes"<<endl;
        else
        cout<<"Set #"<<tc<<": No"<<endl;
    }

    return 0;
}
