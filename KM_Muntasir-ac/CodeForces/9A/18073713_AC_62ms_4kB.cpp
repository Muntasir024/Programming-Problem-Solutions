#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ,m ,x, y, mx;
    scanf("%d %d", &x, &y);
    mx = x;
    if(y>mx) mx=y;
    x=6-mx;
    if(x==5) cout << "1/1" << endl;
    if(x==4) cout << "5/6" << endl;
    if(x==3) cout << "2/3" << endl;
    if(x==2) cout << "1/2" << endl;
    if(x==1) cout << "1/3" << endl;
    if(x==0) cout << "1/6" << endl;
}
