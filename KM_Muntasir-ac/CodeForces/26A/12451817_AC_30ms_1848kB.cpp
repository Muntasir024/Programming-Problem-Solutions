#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,i,n,cnt,j,k;
    bool prime[3000+1];
    memset(prime, true, sizeof(prime));

    for (p=2; p*p<=3005; p++)
    {
        if (prime[p] == true)
        {
            for (i=p*2; i<=3005; i += p)
                prime[i] = false;
        }
    }

    cin>>n;
    k=0;
    for(i=2; i<=n; i++)
    {
        cnt=0;
        if(prime[i]==false)
        {
            for(j=2; j<=i; j++)
            {
                if(i%j==0 && prime[j]==true)
                    cnt++;
            }
        }

        if(cnt==2)
            k++;
    }
    cout<<k<<endl;

    return 0;
}
