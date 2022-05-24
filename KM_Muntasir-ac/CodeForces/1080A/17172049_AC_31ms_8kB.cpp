#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m,k, s = 0;
    cin>>m>>k;
    if(m*2 % k) s+=((m*2)/k)+1; else s+=((m*2)/k);
    if(m*5 % k) s+=((m*5)/k)+1; else s+=((m*5)/k);
    if(m*8 % k) s+=((m*8)/k)+1; else s+=((m*8)/k);
    cout<<s<<endl;
    //main();
}
