#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long q,l,r,i;
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        long long Xor1 = 0,Xor2 = 0;
        for(i=l;;i++)
        {
            if(i%8 == 0)
            {
                break;
            }
            if(i%4==0)
            {
                Xor1 ^= i;
            }
            else if((i-1)%4==0)
            {
                Xor1 ^= 1;
            }
            else if((i-2)%4==0)
            {
                Xor1 ^= i+1;
            }
        }
        for(i=r;;i--)
        {
            if(i%8 == 0)
            {
                Xor2 ^= i;
                break;
            }
            if(i%4==0)
            {
                Xor2 ^= i;
            }
            else if((i-1)%4==0)
            {
                Xor2 ^= 1;
            }
            else if((i-2)%4==0)
            {
                Xor2 ^= i+1;
            }
        }
        cout<<(Xor1^Xor2)<<endl;
    }
    return 0;
}

