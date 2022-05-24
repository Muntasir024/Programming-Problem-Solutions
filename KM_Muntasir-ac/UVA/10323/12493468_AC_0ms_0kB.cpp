#include<bits/stdc++.h>
using namespace std;

long long fact(long long n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    long long n,t,i;
    while(scanf("%lld",&n) != EOF)
    {
        if(n<=0)
        {
            n = n * (-1);
            if(n%2 == 1)
                cout<<"Overflow!"<<endl;
            else
                cout<<"Underflow!"<<endl;
        }
        else
        {
            if(n>13)
                cout<<"Overflow!"<<endl;
            else if(n<8)
                cout<<"Underflow!"<<endl;
            else
                cout<<fact(n)<<endl;
        }
    }
    return 0;
}
