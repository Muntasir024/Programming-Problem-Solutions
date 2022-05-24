#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int T,N,B,k,a,R,S;

    cin>>T;

    while(T--)
    {
        cin>>N>>B;
        S=0;
        while(B--)
        {
            R=1;
            cin>>k;
            while(k--)
            {
                cin>>a;
                R=(R*a)%N;
            }
            S=(S+R)%N;
        }
        cout<<S<<endl;
    }
    return 0;
}
