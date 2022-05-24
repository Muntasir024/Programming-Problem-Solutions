#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0;
    char C,q,h[1000];
    while(cin>>a>>C>>b>>q>>h)
    {
        if((a+b == atoi(h)) || (a-b == atoi(h)))
            ++c;
    }
    printf("%d\n",c);
}
