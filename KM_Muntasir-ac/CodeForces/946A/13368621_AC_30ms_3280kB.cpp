#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x,b=0,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x>-1)
            b+=x;
        else
            c+=x;
    }
    cout<<(b-c)<<endl;
    return 0;
}

