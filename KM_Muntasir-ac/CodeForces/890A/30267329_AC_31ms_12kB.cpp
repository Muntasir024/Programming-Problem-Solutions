#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a[10], i, j, k, s = 0, f= 0;
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];

    s = a[0]+a[1]+a[2]+a[3]+a[4]+a[5];
    if(s%2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6 && i!=j;j++)
        {
            for(k=0;k<6 && i!=k && j!=k;k++)
            {
                if(a[i]+a[j]+a[k] == s/2)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

