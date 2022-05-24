#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,p,d,c=0;
    cin>>n;
    p=n;
    if(n==0)
        cout<<"1"<<endl;
    else
    {
        while(p != 0)
        {
            p = p / 10;
            ++c;
        }
        cout<<c<<endl;
    }

    return 0;
}

