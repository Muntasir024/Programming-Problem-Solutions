#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,a[5];
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
        if(a[0]==1 && a[1]==2 && a[2]==3 && a[3]==4 && a[4]==5)
            cout<<"Y"<<endl;
        else if(a[0]==2 && a[1]==3 && a[2]==4 && a[3]==5 && a[4]==6)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
