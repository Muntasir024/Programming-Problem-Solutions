#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,i,cnt,j,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>d;
        long long arr[d];
        map <int,int> m;
        for(i=0;i<d;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+d);
        cnt=0;

        for(i=1;i<=n;i++)
        {
            for(j=0;j<d;j++)
            {
                if(i%arr[j]==0)
                    m[i]=1;
            }
        }
        for(i=1,j=1;i<=n;i++)
        {
            if(i == (7*j-1)){
                m[i]=0;
                m[i+1]=0;
                j++;
            }
        }

        for(i=1;i<=n;i++)
        {
                if(m[i] == 1)
                    ++cnt;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
