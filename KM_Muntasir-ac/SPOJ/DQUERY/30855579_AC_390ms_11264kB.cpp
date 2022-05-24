#include<bits/stdc++.h>
#define blk 555
using namespace std;

struct query {
    int l;
    int r;
    int i;
};

query Q[200001];
int ar[30001] , ans[200001];
int fre[1000001];
int cnt = 0;

bool comp(query a, query b) {
    if((a.l / blk) != (b.l / blk)) return ((a.l / blk) < (b.l / blk));
    else                           return (a.r < b.r);
}

void add(int pos) {
    fre[ar[pos]]++;
    if(fre[ar[pos]] == 1) cnt++;
}

void remov(int pos) {
    fre[ar[pos]]--;
    if(fre[ar[pos]] == 0) cnt--;
}

int main() {
    int n, q;
    scanf("%d", &n);

    for(int i=0;i<n;i++) scanf("%d", &ar[i]);

    scanf("%d", &q);
    for(int i=0;i<q;i++) {
        scanf("%d %d", &Q[i].l, &Q[i].r);
        Q[i].i = i;
        Q[i].l--;
        Q[i].r--;
    }

    sort(Q, Q+q, comp);

    int ML = 0, MR = -1;
    for(int i=0;i<q;i++)
    {
        int L = Q[i].l;
        int R = Q[i].r;

        while(ML > L) ML--, add(ML);

        while(MR < R) MR++, add(MR);

        while(ML < L) remov(ML), ML++;

        while(MR > R) remov(MR), MR--;

        ans[Q[i].i] = cnt;
    }

    for(int i=0;i<q;i++) printf("%d\n", ans[i]);
    return 0;
}
