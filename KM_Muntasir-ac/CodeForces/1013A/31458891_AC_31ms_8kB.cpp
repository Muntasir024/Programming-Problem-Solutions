#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, i, s = 0, c = 0, x;
    cin>>n;
    i = n;
    while(n--)
    {
        cin>>x;
        s += x;
    }
    n = i;
    while(n--)
    {
        cin>>x;
        c += x;
    }
    if(c <= s) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}