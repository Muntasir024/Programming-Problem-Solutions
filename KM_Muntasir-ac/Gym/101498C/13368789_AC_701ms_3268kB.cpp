#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,a[10],b[10];
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        b[0]=a[0];
        b[1]=a[1];
        b[2]=a[2];
        sort(a,a+3);
        if(b[0]==a[0])
            cout<<"First"<<endl;
        else if(b[1]==a[0])
            cout<<"Second"<<endl;
        else
            cout<<"Third"<<endl;
    }
    return 0;
}
