#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q, i, c;
    cin>>q;
    while(q--)
    {
        cin>>n;
        c = 0;
        while(n!=1)
        {
            if(n%2==0) n = n / 2;
            else if(n%3==0) n = 2*n / 3;
            else if(n%5==0) n = 4*n / 5;
            if(c>80) break;c++;
        }
        if(c<80) cout<<c<<endl;
        else cout<<"-1"<<endl;
    }
}
