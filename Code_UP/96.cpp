#include <stdio.h>

int main() {
	int n, i, j, x, y; // n: �� ���� , x: x��ǥ, y: y��ǥ
	int a[19][19] = {}; //�ٵ���

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