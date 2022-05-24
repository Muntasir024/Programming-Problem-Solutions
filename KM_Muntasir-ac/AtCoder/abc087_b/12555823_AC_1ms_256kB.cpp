#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x,i,s,j,k,l,cnt=0;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>x;
    for (i = 0; i <= a; ++i)
    {
        for (j = 0; j <= b; ++j)
        {
            for (k = 0; k <= c; ++k)
            {
                l = (i*500) + (j*100) + (k*50);
                if(l == x)
                    cnt++;
                else if (l>x)
                {
                    break;
                }
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}
