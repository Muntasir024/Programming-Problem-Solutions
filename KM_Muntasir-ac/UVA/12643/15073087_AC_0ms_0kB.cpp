#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b, c;
    while(cin>>n>>a>>b)
    {
        c = 0;
        while(abs(a-b) >= 1)
        {
            if(a%2==1)
                a = a / 2 + 1;
            else
                a = a / 2;

            if(b%2==1)
                b = b / 2 + 1;
            else
                b = b / 2;

            ++c;
        }
        if(c > n)
            c = n;
        cout<<c<<endl;
    }
    return 0;
}
