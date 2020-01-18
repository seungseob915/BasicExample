#include <stdio.h>

int main() {
	int n, i, j, x, y, q,r; // n: 10자 뒤집기(변환) , x: x좌표, y: y좌표
	int a[19][19] = {}; //바둑판

	for (q = 0; q <= 18; q++) {
		for (r = 0; r <= 18; r++) {
			scanf("%d ", &a[q][r]);
		}
	}

	scanf("%d", &n); // 10자 뒤집기 몇번하는지

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		for (j = 0; j <= 18; j++)	//x는 고정 y 반전
		{
			if (a[x-1][j] == 1)
				a[x-1][j] = 0;
			else
				a[x-1][j] = 1;
		}
		for (j = 0; j <= 18; j++)	//x부터 전환 y는 고정
		{
			if (a[j][y-1] == 1)
				a[j][y-1] = 0;
			else
				a[j][y-1] = 1;
		}

	}
	for (i = 0; i <= 18; i++) {
		for (j = 0; j <= 18; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}