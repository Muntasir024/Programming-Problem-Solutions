#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h1,m1,h2,m2,s1,s2;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2) == 4 )
    {
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;
        s1 = h1*60 + m1;
        s2 = h2*60 + m2;
        if(s1<=s2)
            cout<<s2-s1<<endl;
        else
            cout<<(s2+1440)-s1<<endl;
    }

    return 0;
}
