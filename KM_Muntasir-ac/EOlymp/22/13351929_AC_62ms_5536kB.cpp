#include<bits/stdc++.h>
using namespace std;

int mir(int n)
{
    int d=0;

    while(n!=0)
    {
        d = d*10 + n%10;
        n = n / 10;
    }
    //cout<<d<<endl;
    return d;
}

int main()
{
    int a,b,i,j,c,p;
    map <int,int> prime;
    prime[0]=1;
    prime[1]=1;
    for(i=2; i*i<=100000; i++)
    {
        if(prime[i]==0)
        {
            for(j=i+i; j<=100000; j+=i)
                prime[j]=1;
        }
    }
    cin>>a>>b;
    c=0;
    for(i=a; i<=b; i++)
    {
        if(prime[i]==0)
        {
            p=mir(i);
            if(prime[p]==0)
            {
                ++c;
                //cout<<i<<endl;
            }
        }
    }

    cout<<c<<endl;
    return 0;
}


