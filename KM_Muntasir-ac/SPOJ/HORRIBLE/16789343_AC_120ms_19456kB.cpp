#include<bits/stdc++.h>
#define maxn 262145
#define ll long long
using namespace std;

struct info
{
    ll prop, sum;
} tree[maxn];

void update(ll node, ll b, ll e, ll i, ll j, ll x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x;
        return;
    }
    ll Left = node * 2;
    ll Right = (node * 2) + 1;
    ll mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
}

ll query(ll node, ll b, ll e, ll i, ll j, ll carry)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);

    ll Left = node << 1;
    ll Right = (node << 1) + 1;
    ll mid = (b + e) >> 1;

    ll p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    ll p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}

int main()
{
    ll t, n, q, i, x, p, v, o;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &n, &q);
        memset(tree, 0, sizeof(tree));

        while(q--)
        {
            scanf("%lld", &o);
            if(o)
            {
                scanf("%lld %lld", &p, &v);
                printf("%lld\n", query(1, 1, n, p, v, 0));
            }
            else
            {
                scanf("%lld %lld %lld", &p, &v, &x);
                update(1, 1, n, p, v, x);
            }
        }
    }
    return 0;
}
