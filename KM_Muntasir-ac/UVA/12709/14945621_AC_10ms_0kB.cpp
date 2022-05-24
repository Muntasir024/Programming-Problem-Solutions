#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, ans, l, w, h,  mx, y;
    while(cin>>t,t)
    {
        ans = mx = 0;
        while(t--)
        {
            cin>>l>>w>>h;
            y = (l * w * h);
            if(mx < h)
            {
                mx = h;
                ans = y;
            }
            else if(mx == h)
            {
                if(ans < y)
                {
                    ans = y;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
