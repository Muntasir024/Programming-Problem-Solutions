#include<bits/stdc++.h>
#define ll long long
using namespace std;

int a[100007];
int st[400007];

void build(int si, int ss, int se)
{
    if(ss == se) {
        st[si] = a[ss];
        return ;
    }
    int mid = (ss + se) / 2;
    build(si+si, ss, mid);
    build(si+si+1, mid+1, se);

    st[si] = min(st[si+si], st[si+si+1]);
}

int query(int si, int ss, int se, int qs, int qe)
{
    if(qe < ss || qs > se) return INT_MAX;

    if(qs <= ss && qe >= se) return st[si];

    int mid = (ss + se) / 2;
    return min(query(si+si, ss, mid, qs, qe), query(si+si+1, mid+1, se, qs, qe));
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

    int n, q, i, j;
    cin >> n;

    for(i=1;i<=n;i++) cin >> a[i];
    build(1, 1, n);

    cin >> q;
    while(q--)
    {
        cin >> i >> j;
        cout << query(1, 1, n, i+1, j+1) << endl;
    }
    return 0;
}
