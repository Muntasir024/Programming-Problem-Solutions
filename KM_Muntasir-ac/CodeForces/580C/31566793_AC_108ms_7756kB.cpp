#include<bits/stdc++.h>
using namespace std;
#define MN 100005

int n, m, a[MN], c[MN], res;
vector <int> v[MN];
void go(int x, int z) {
	if (x != 1) {
		if (z > m) return;
	}
	int cc = 0;
	for (int i = 0; i < v[x].size(); i++) {
		int y = v[x][i];
		if (c[y] == 0) {
			cc++;
			c[y] = 1;
			if (a[y]) go(y, z + a[y]);
			else go(y, 0);
		}
	}
	if (cc == 0) res++;
}
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (int i = 1; i < n; i++) {
		int xi, yi;
		scanf("%d%d", &xi, &yi);
		v[xi].push_back(yi);
		v[yi].push_back(xi);
	}
	c[1] = 1;
	go(1, a[1]);
	printf("%d", res);
}
