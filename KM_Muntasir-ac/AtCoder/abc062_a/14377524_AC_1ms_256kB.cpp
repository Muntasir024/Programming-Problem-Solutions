#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, i;
    map <int, int> m;
    m[1] = 1;
    m[3] = 1;
    m[5] = 1;
    m[7] = 1;
    m[8] = 1;
    m[10] = 1;
    m[12] = 1;
    m[4] = 2;
    m[6] = 2;
    m[9] = 2;
    m[11] = 2;
    m[2] = 3;
    cin>>x>>y;
    if(m[x] == m[y]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
