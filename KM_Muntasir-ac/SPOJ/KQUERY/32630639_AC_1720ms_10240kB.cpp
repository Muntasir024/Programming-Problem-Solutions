#include<bits/stdc++.h>
using namespace std;

vector <int > st[150007];
int a[30007];

void build(int si, int ss, int se) {
    if(ss == se) {
        st[si].push_back(a[ss]);
        return;
    }

    int mid = (ss + se) / 2;
    build(si+si, ss, mid);
    build(si+si+1, mid+1, se);

    int i = 0, j = 0;
    while(i < st[si+si].size() && j < st[si+si+1].size()) {
        if(st[si+si][i] <= st[si+si+1][j]) st[si].push_back(st[si+si][i]), i++;
        else                               st[si].push_back(st[si+si+1][j]), j++;
    }

    while(i < st[si+si].size()) st[si].push_back(st[si+si][i]), i++;
    while(j < st[si+si+1].size()) st[si].push_back(st[si+si+1][j]), j++;
}

int query(int si, int ss, int se, int qs, int qe, int k) {
    if(ss > qe || se < qs) return 0;

    if(ss >= qs && se <= qe) {
        return st[si].end() - (upper_bound(st[si].begin(), st[si].end(), k));
    }

    int mid = (ss + se) / 2;
    int l = query(si+si, ss, mid, qs, qe, k);
    int r = query(si+si+1, mid+1, se, qs, qe, k);

    return l+r;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

    int n, l, r, i, q;
    cin >> n;

    for(i=1;i<=n;i++) cin >> a[i];

    build(1, 1, n);

    cin >> q;
    while(q--) {
        cin >> l >> r >> i;
        cout << query(1, 1, n, l, r, i) << endl;
    }
}