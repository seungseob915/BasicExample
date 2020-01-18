#include <stdio.h>

int main() {
	int n, i, j, x, y; // n: Èòµ¹ °¹¼ö , x: xÁÂÇ¥, y: yÁÂÇ¥
	int a[19][19] = {}; //¹ÙµÏÆÇ

	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		a[x-1][y-1] = 1;
	}
	for (i = 0; i <= 18; i++) {
		for (j = 0; j <= 18; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

}