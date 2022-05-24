#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,s,i,t;
    cin>>t;
    while(t--)
    {
        cin>>a;

            s=0;
            for(i=1; i<a; i++)
            {
                s+=i;
            }
            cout<<s<<endl;
    }
    return 0;
}
