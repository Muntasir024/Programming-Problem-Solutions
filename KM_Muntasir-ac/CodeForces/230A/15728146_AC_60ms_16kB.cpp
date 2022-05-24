#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct num
{
    int x,y;
}arr[1007];

bool cmp(num a, num b)
{
    return a.x < b.x;
}

int main()
{
    int n, i, m, f = 1;
    scanf("%d %d", &m, &n);
    for(i = 0; i < n; i++)
        scanf("%d %d", &arr[i].x, &arr[i].y);
    sort(arr, arr+n, cmp);
    for(i = 0; i < n; i++)
    {
        if(m > arr[i].x)
            m += arr[i].y;
        else
        {
            f = 0;
            break;
        }
    }
    if(f) printf("YES\n");
    else printf("NO\n");
    return 0;
}
