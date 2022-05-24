#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s, n, x=0;
    cin>>s>>n;
    while(s)
    {
        s=s/n;
        x++;
    }
    cout<< x <<endl;
    return 0;
}
