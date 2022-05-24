#include<bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1%n2);
    else
       return n1;
}

int main()
{
    long a,b,n,i=1;
    cin>>a>>b>>n;
    while(n) {
        if(i%2==1)
            n=n-gcd(a,n);
        else
            n=n-gcd(b,n);
        i++;
    }
    if(i%2==1)
        cout<<'1'<<endl;
    else
        cout<<'0'<<endl;

    return 0;
}