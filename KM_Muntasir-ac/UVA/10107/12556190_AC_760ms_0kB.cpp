#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <long long> vec;
    long long n,i=0,m;
    while(scanf("%lld",&n) != EOF)
    {
        vec.push_back(n);
        sort(vec.begin(),vec.begin()+i+1);
        if(i%2==0)
            cout<<vec[i/2]<<endl;
        else
        {
            m=vec[i/2]+vec[i/2+1];
            cout<<m/2<<endl;
        }
        ++i;
    }
    return 0;
}
