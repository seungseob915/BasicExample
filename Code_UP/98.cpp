#include <stdio.h>

int main() {
	int h, w, j, n, l, d, x, y; // h: ����, w: ����, n: ���� ����, l: ���� ����, d: ���� ����, x-y: ���� ��ǥ
	int a[100][100] = {}; //�ٵ���

	scanf("%d %d", &h, &w);
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (d == 1) {
			for (int j = x; j < x + l; j++) {
				a[j - 1][y - 1] = 1;
			}
		}
		else {
			for (int j = y; j < y + l; j++) {
				a[x - 1][j - 1] = 1;
			}
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}