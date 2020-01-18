#include <stdio.h>

int main() {
	int h, w, j, n, l, d, x, y; // h: 세로, w: 가로, n: 막대 갯수, l: 막대 길이, d: 막대 방향, x-y: 막대 좌표
	int a[100][100] = {}; //바둑판

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