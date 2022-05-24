#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,m[10],n,l,a[10];

    while(scanf("%d%d%d%d%d",&a[1],&a[2],&a[3],&a[4],&a[5]) != EOF)
    {
        l=1;
        for(i=1; i<=5; i++)
        {
            cin>>m[i];
        }
        for(i=1; i<=5; i++)
        {
            if(a[i] == m[i])
            {
                cout<<"N"<<endl;
                l=0;
                break;
            }
        }
        if(l == 1)
            cout<<"Y"<<endl;
    }

    return 0;
}
