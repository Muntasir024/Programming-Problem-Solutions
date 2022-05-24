#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,cnt=1,m=1;
    cin>>n;
    long long arr[n+5];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i-1]<=arr[i] && i)
        {
            cnt++;
            if(cnt>m)
                m=cnt;
        }
        else
            cnt=1;
    }
        cout<<m<<endl;
    return 0;
}
