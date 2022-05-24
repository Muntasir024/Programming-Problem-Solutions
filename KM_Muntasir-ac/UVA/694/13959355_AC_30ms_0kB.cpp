#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,l,i,n,t=1;
    while(scanf("%lld %lld",&a,&l) == 2)
    {
        if(a<0  && l<0) return 0;
        n=a;
        int c=0;
        while(n!= 1 && n<=l)
        {
            if(n%2==0) n=n/2;
            else n = 3*n+1;
            ++c;
        }
        if(n==1) c++;
        cout<<"Case "<<t++<<": A = "<<a<<", limit = "<<l<<", number of terms = "<<c<<endl;
    }
    return 0;
}
