#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c=0,mx=0,x;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x > mx)
        {
            mx = x;
            ++c;
        }
    }
    cout<<c<<endl;

    return 0;
}
