#include <stdio.h>

int main() {
	int n, i, j, x, y, q,r; // n: 10�� ������(��ȯ) , x: x��ǥ, y: y��ǥ
	int a[19][19] = {}; //�ٵ���

	for (q = 0; q <= 18; q++) {
		for (r = 0; r <= 18; r++) {
			scanf("%d ", &a[q][r]);
		}
	}

	scanf("%d", &n); // 10�� ������ ����ϴ���

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		for (j = 0; j <= 18; j++)	//x�� ���� y ����
		{
			if (a[x-1][j] == 1)
				a[x-1][j] = 0;
			else
				a[x-1][j] = 1;
		}
		for (j = 0; j <= 18; j++)	//x���� ��ȯ y�� ����
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