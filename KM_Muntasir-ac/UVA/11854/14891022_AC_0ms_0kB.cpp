#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5],x,y;
    while(scanf("%d%d%d",&a[0],&a[1],&a[2]) == 3)
    {
        if(a[0]==0 || a[1]==0 || a[2]==0)
            return 0;

        sort(a,a+3);
        x = a[2] * a[2];
        y = (a[0] * a[0]) + (a[1] * a[1]);
        if(x == y)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
}

