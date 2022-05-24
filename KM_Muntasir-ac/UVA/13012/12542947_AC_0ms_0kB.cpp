#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c,x;
    while(scanf("%d",&n) != EOF)
    {
        c=0;
        for(i=0;i<5;i++)
        {
            cin>>x;
            if(x == n)
                c++;
        }
        cout<<c<<endl;
    }

    return 0;
}
