#include <iostream>
using namespace std;

int main()
{
    int k;
    cin>>k;
    for(int t=1; t<=k; t++)
    {
        int a, b, x, y, ans;
        cin>>a>>b;
        x = (b/3)*2;
        if(b%3 == 2)
            x++;
        y = (a/3)*2;
        if(a%3 == 2)
            y++;
        ans = x - y;
        if(a%3==0 || a%3==2)
            ans++;
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
}

