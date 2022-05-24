#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll getMaxArea(ll hist[], ll n)
{
    stack<ll> s;

    ll max_area = 0, area_with_top, tp, i = 0;

    while (i < n)
    {
        if (s.empty() || hist[s.top()] <= hist[i])
            s.push(i++);
        else
        {
            tp = s.top();
            s.pop();

            area_with_top = hist[tp] * (s.empty() ? i :
                                        i - s.top() - 1);

            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i :
                                    i - s.top() - 1);

        if (max_area < area_with_top)
            max_area = area_with_top;
    }

    return max_area;
}

int main()
{
    ll n, i;

    while(scanf("%lld", &n) && n)
    {
        ll a[n+2];
        for(i=0; i<n; i++)
            scanf("%lld", &a[i]);
        printf("%lld\n",getMaxArea(a, n));
    }
    return 0;
}

