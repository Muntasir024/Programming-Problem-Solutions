#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,c1,c2,i;
    char p1,p2;
    cin>>t;
    while(t--)
    {
        c1=c2=0;
        cin>>n;
        cin.ignore();
        while(n--)
        {
            cin>>p1>>p2;
            if((p1=='R' && p2=='S') || (p1=='S' && p2=='P') || (p1=='P' && p2=='R'))
                ++c1;
            else if((p1=='S' && p2=='R') || (p1=='P' && p2=='S') || (p1=='R' && p2=='P'))
                ++c2;
        }
        if(c1==c2)
            cout<<"TIE"<<endl;
        else if(c1>c2)
            cout<<"Player 1"<<endl;
        else
            cout<<"Player 2"<<endl;
    }

    return 0;
}
