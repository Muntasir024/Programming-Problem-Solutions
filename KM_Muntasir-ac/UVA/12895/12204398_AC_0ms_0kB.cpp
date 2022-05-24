#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i,n,s,d,c,cnt,k;
    cin>>t;

    while(t--)
    {
        cin>>n;
        s=0;
        cnt=0;
        c=n;
        while(n != 0)
        {
            n /= 10;
            ++cnt;
        }
        n=c;
        while(n)
        {
            d = n % 10;
            k = 1;
            for(i=1; i<=cnt; i++)
            {
                k = k * d;
            }
            s = s + k;
            n = n / 10;
        }
        if(c == s)
            cout<<"Armstrong"<<endl;
        else
            cout<<"Not Armstrong"<<endl;
    }

    return 0;
}
