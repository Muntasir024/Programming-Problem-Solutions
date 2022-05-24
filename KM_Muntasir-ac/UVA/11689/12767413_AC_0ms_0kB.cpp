#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,s,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        a = a + b;
        s=0;
        while(a>=c)
        {
            s=s+(a/c);
            a=(a/c)+(a%c);
        }
        printf("%d\n",s);
    }

    return 0;
}
