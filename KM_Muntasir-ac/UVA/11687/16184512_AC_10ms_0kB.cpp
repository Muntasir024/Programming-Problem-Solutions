#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,n;string s;
    while(getline(cin, s))
    {
        if(s == "END") return 0;
        l=s.size();
        if(s=="1") n=1;else if(l==1) n=2;else if(l<10) n=3;else n=4;
        printf("%lld\n",n);
    }
}