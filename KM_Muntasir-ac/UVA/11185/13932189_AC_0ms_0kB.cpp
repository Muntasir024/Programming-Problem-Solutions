#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,i;

    while(scanf("%lld",&n) == 1)
    {
        if(n <= -1) return 0;
        vector <long long> vec;
        if(n==0)
            cout<<"0"<<endl;
        else
        {
            while(n != 0)
            {
                t=n%3;
                vec.push_back(t);
                n = n / 3;
            }
            for(i=vec.size()-1; i>=0; i--)
                cout<<vec[i];
            cout<<endl;
        }
    }

    return 0;
}
