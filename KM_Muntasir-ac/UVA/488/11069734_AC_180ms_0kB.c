#include<stdio.h>

int main() {
	int t, n, m, i, j, k;

	scanf("%d", &t);
	while (t--) {
		scanf("%d\n%d", &n, &m);

		for ( i = 0; i < m; i++) {
			for ( j = 1; j <= n; j++) {
				for ( k = 0; k < j; k++) {
					printf("%d", j);
				}
				printf("\n");
			}
			for ( j = n - 1; j >= 1; j--) {
				for ( k = 0; k < j; k++) {
					printf("%d", j);
				}
				printf("\n");
			}
			if (i != m - 1)
				printf("\n");
		}
		if (t)
			printf("\n");
	}

	return 0;
}
