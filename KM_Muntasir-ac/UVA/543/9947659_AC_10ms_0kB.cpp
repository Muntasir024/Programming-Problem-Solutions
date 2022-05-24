#include <bits/stdc++.h>
using namespace std;
bool prime[1000005];

int main()
{
    vector <int> vec;
    int n,i,j;

    prime[0]=1;
    prime[1]=1;
    for(i=2;i*i<=1000000;i++)
        if(prime[i]==0) {
        vec.push_back(i);
            for(j=i+i;j<=1000000;j=j+i)
                prime[j]=1;
    }
    while(scanf("%d",&n) == 1) {
        if(n==0) return 0;
        else if(n>=6 && n<=1000000) {
        for(i=0;i<=n;i++)
            if(prime[vec[i]]==0 && vec[i]%2 != 0 && prime[n-vec[i]]==0) {
                printf("%d = %d + %d\n",n,vec[i],n-vec[i]);
                break;
        }
        }
        else
            printf("Goldbach's conjecture is wrong.\n");
    }



    return 0;
}
