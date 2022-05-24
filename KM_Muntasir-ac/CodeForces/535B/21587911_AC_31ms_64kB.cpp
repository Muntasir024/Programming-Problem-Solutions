#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i=3, j, k, c=1, x, ar[7000];
    scanf("%lld", &n);
    ar[1]=4;
    ar[2]=7;
    if(n==4)
    {
      cout<< 1 <<endl;
      return 0;
    }
    if(n==7)
    {
      cout<< 2 <<endl;
      return 0;
    }
    while(ar[i]<n)
    {
        k=i;
        for(j=c;j<k;j++)
        {
            ar[i]=ar[j]*10 + 4;
            //cout<< ar[i] <<endl;
            if(ar[i]>=n) break;
            i++;
            ar[i]=ar[j]*10 + 7;
            //cout<< ar[i] <<endl;
            if(ar[i]>=n) break;
            i++;
        }
        c=k;
    }
    cout<< i <<endl;
    return 0;
}
