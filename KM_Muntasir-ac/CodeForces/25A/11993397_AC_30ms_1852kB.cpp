#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,b=0,i,arr[105];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            a++;
        else
            b++;
    }
    for(i=1;i<=n;i++)
    {
        if(a==1 && arr[i]%2==0)
        {
            cout<<i<<endl;
            break;
        }
        else if(b==1 && arr[i]%2==1)
        {
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
