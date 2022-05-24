#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,req[15],now[15],sum,tc=1;
    while(scanf("%d",&now[0]) == 1)
    {
        if(now[0] < 0)
            break;
        for(i=1; i<=12; i++)
        {
            cin>>now[i];
        }
        for(i=1; i<=12; i++)
        {
            cin>>req[i];
        }
        sum=now[0];
        cout<<"Case "<<tc++<<":"<<endl;
        for(i=1; i<=12; i++)
        {
            if(sum>=req[i])
            {
                sum -= req[i];
                cout<<"No problem! :D"<<endl;
            }
            else
            {
                cout<<"No problem. :("<<endl;
            }
            sum += now[i];
        }
    }

    return 0;
}
