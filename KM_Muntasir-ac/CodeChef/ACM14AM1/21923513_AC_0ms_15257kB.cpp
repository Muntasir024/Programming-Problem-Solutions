#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, t, c=0, x, i, a, b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        c=0;
        for(i=0; i<a; i++)
        {
            cin>>x;
            if(x>=b)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
