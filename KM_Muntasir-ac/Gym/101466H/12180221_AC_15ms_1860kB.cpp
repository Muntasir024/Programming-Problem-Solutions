#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    for(i=1; i<=(2*n+1); i++)
    {
        if(i==1)
            cout<<"*";
        else if(i>1 && i<n)
            cout<<" ";
        else if(i==n)
            cout<<"*";
        else if(i==(n+1))
            cout<<" ";
        else if(i>(n+1) && i<=(2*n+1))
            cout<<"*";
    }
    cout<<endl;

    for(i=1; i<=(n-2); i++)
    {
        for(j=1; j<=(2*n+1); j++)
        {
            if(j==1 || j==n || j==(n+2) || j==(2*n+1))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    for(i=1; i<=(2*n+1); i++)
    {
        if(i>=1 && i<=n)
            cout<<"*";
        else if(i==(n+1))
            cout<<" ";
        else if(i==(n+2))
            cout<<"*";
        else if(i>(n+2) && i<(2*n+1))
            cout<<" ";
        else if(i==(2*n+1))
            cout<<"*";
    }
    cout<<endl;

    return 0;
}
