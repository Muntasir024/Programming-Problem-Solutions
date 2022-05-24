#include<bits/stdc++.h>
using namespace std;

int main()
{
    double l,d,v1,v2,s;
    cin>>d>>l>>v1>>v2;
    s = (l-d)/(v1+v2);
    printf("%.14lf\n",s);
    return 0;
}
