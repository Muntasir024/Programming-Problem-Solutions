#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, h;
    cin>>h>>m;
    if(h==0) h=12;
    if(m==0) m=60;
    cout<<abs(h-12)<<" "<<abs(m-60)<<endl;
    return 0;
}
