#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[5], i;
    cin>>n;
    a[0] = n / 10;
    a[1] = n % 100;
    a[2] = ((n / 100) * 10) + (n % 10);

    sort(a,a+3);
    if(a[0] > 9) cout<<a[0]<<endl;
    else if(a[1] > 9) cout<<a[1]<<endl;
    else cout<<a[2]<<endl;
    return 0;
}
