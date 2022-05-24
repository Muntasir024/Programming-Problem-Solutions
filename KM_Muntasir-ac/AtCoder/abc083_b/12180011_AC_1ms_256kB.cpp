#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,i,s,c,sum;
    cin>>n>>a>>b;

    sum=0;
    for(i=1;i<=n;i++)
    {
        c=i;
        s=0;
        while(c != 0)
        {
            s += c%10;
            c/=10;
        }
        if(s>=a && s<=b)
        {
            sum+=i;
        }
    }
    cout<<sum<<endl;

    return 0;
}
