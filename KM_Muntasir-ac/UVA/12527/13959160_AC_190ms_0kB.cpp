#include<bits/stdc++.h>
using namespace std;

int digi(int n)
{
    map <int, int> m;
    int l=1,d=0;
    while(n)
    {
        d = (n%10);
        m[d]++;
        if(m[d]>1) l=0;
        n = n / 10;
    }
    return l;
}

int main()
{
    int n,m,i;
    while(scanf("%d %d",&n,&m) != EOF)
    {
        int c=0;
        for(i=n;i<=m;i++)
        {
            c += digi(i);
        }
        cout<<c<<endl;
    }
    return 0;
}
