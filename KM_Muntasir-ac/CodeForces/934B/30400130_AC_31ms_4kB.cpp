#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int n, k, i;
    cin>>n;
    if(n>36)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(n%2)
    {
        for(i=0;i<n/2;i++) cout<<"8";
        cout<<"9"<<endl;
    }
    else
    {
        for(i=0;i<n/2;i++) cout<<"8";
        cout<<endl;
    }
    //main();
    return 0;
}
