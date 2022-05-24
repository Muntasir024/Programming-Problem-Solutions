#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,arr[6][6];
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1)
            {
                n=i;
                m=j;
            }
        }
    }

    cout<<(abs(n-3)+abs(m-3))<<endl;

    return 0;
}
