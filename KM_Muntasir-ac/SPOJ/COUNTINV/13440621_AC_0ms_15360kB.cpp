#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,j;
    while(cin>>n,n)
    {
        long long a[n+2],c=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            for(j=i;j<n;j++)
            {
                if(a[i]>a[j])
                    ++c;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}

