#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, i, n, c;
    while(cin>>x>>y)
    {
        n = (y - x);
        c = y / n;
        if(y % n != 0) ++c;
        cout<<c<<endl;
    }
    return 0;
}
