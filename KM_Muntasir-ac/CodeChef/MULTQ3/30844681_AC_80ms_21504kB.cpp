#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct node {
    int ar[3];
};
node st[400007];
int lazy[400007];

void build(int si, int ss, int se)
{
    if(ss == se) {
        st[si].ar[0] = 1;
        st[si].ar[1] = 0;
        st[si].ar[2] = 0;
        return ;
    }
    int mid = (ss + se) / 2;
    build(si+si, ss, mid);
    build(si+si+1, mid+1, se);

    st[si].ar[0] = st[si+si].ar[0] + st[si+si+1].ar[0];
    st[si].ar[1] = st[si+si].ar[1] + st[si+si+1].ar[1];
    st[si].ar[2] = st[si+si].ar[2] + st[si+si+1].ar[2];
}

void shift(int si) {
    int a = st[si].ar[2];
    st[si].ar[2] = st[si].ar[1];
    st[si].ar[1] = st[si].ar[0];
    st[si].ar[0] = a;
}

void update(int si, int ss, int se, int qs, int qe)
{
    if(lazy[si] != 0)
    {
        int ad = lazy[si];
        lazy[si] = 0;
        if(ss != se)
        {
            lazy[si+si] += ad;
            lazy[si+si+1] += ad;
        }
        ad %= 3;
        for(int i=0;i<ad;i++) shift(si);
    }
    if(qe < ss || qs > se) return;

    if(qs <= ss && qe >= se) {
        shift(si);
        if(ss != se) {
            lazy[si+si]++;
            lazy[si+si+1]++;
        }
        return;
    }

    int mid = (ss + se) / 2;
    update(si+si, ss, mid, qs, qe);
    update(si+si+1, mid+1, se, qs, qe);

    st[si].ar[0] = st[si+si].ar[0] + st[si+si+1].ar[0];
    st[si].ar[1] = st[si+si].ar[1] + st[si+si+1].ar[1];
    st[si].ar[2] = st[si+si].ar[2] + st[si+si+1].ar[2];
}

int query(int si, int ss, int se, int qs, int qe)
{
    if(lazy[si] != 0)
    {
        int ad = lazy[si];
        lazy[si] = 0;
        if(ss != se)
        {
            lazy[si+si] += ad;
            lazy[si+si+1] += ad;
        }
        ad %= 3;
        for(int i=0;i<ad;i++) shift(si);
    }
    if(qe < ss || qs > se) return 0;

    if(qs <= ss && qe >= se) {
        return st[si].ar[0];
    }

    int mid = (ss + se) / 2;
    return (query(si+si, ss, mid, qs, qe) + query(si+si+1, mid+1, se, qs, qe));
}

int main()
{
    int n, q, i, j, x;
    scanf("%d %d", &n, &q);
    build(1, 1, n);

    while(q--)
    {
        scanf("%d %d %d", &x, &i, &j);
        if(x == 0)   update(1, 1, n, i+1, j+1);
        else printf("%d\n", query(1, 1, n, i+1, j+1));
    }
    return 0;
}
