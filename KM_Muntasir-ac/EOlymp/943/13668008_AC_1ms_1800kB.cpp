#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d=0;
    cin>>n;
    while(n)
    {
        d=(d*10)+(n%10);
        n=n/10;
    }
    cout<<d<<endl;
    return 0;
}
