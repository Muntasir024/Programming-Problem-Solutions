#include<bits/stdc++.h>
#define mx 100001
using namespace std;
int arr[mx];
int tree[mx * 3];
void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = min(tree[Left], tree[Right]);
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 1000000; //বাইরে চলে গিয়েছে
    if (b >= i && e <= j)
        return tree[node]; //রিলেভেন্ট সেগমেন্ট
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return min(p1, p2); //বাম এবং ডান পাশের যোগফল
}
int main()
{
    int t, n, k, i, x, y, tc=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(i=1; i<=n; i++)
            scanf("%d",&arr[i]);

        init(1, 1, n);
        printf("Case %d:\n",tc++);
        while(k--)
        {
            scanf("%d%d",&x,&y);
            printf("%d\n", query(1, 1, n, x, y));
        }
    }
    return 0;
}
