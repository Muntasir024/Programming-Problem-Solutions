#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i,c,r1,r2,x1,x2,y1,y2;
    cin>>t;

    while(t--)
    {
        cin>>r1>>x1>>y1>>r2>>x2>>y2;
        double s = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
        if((r1 - s) >= r2)
            cout<<"Rich"<<endl;
        else
            cout<<"Dead"<<endl;
    }

    return 0;
}
