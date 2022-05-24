#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, c=0, x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<0) c++;
    }
    cout<<c<<endl;
    return 0;
}
