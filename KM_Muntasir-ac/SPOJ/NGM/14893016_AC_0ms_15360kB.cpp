#include<iostream>
using namespace std;

int main()
{
    long long a,b,mx=0,c=0,n;
    cin>>a;
    n=a;
    if(a%10 == 0){
        cout<<"2"<<endl;
        return 0;
    }
    while(a)
    {
        b=a%10;
        if(b>mx)
            mx=b;
        a=a/10;
    }
        cout<<"1"<<endl;
    cout<<mx<<endl;
    return 0;
}

