#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,m,y1,y2,i,t,k,c;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        cin>>d>>m>>y1>>y2;
        c=0;
        if(d==29 && m==2)
        {
            for(i=y1+1; i<=y2; i++)
            {
                if(((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
                    ++c;
            }
            cout<<"Case "<<k<<": ";
            cout<<c<<endl;
        }
        else
        {
            cout<<"Case "<<k<<": ";
            cout<<y2-y1<<endl;
        }
    }

    return 0;
}
