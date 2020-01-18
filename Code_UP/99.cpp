#include <stdio.h>

int main() {
	int x, y;
	int a[10][10] = {}; // 미로

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d ", &a[i][j]); // 0: 갈수있는 곳, 1: 벽, 2: 먹이
		}		
	}
	x = 1, y = 1;

	while (1) {
		if (a[1][1] == 2) {
			a[1][1] = 9;
			break;
		}

		a[1][1] = 9;

		if (a[x][y + 1] == 0) {
			y = y + 1;
			a[x][y] = 9;
		}
		else if(a[x][y + 1] == 2) {
			y = y + 1;
			a[x][y] = 9;
			break;
		}
		else {
			x = x + 1;
			if (a[x][y] == 2) {
				a[x][y] = 9;
				break;
			}
			else if (a[x][y] == 0) {
				a[x][y] = 9;
			}
			else
				break;
		}
	}
	for (int i = 0; i < 10; i++, puts(" ")) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", a[i][j]); // 0: 갈수있는 곳, 1: 벽, 2: 먹이
		}
	}
}