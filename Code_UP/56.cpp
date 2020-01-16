#include <stdio.h>

int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	if ((a && !b )||(b&&!a) == 1)
		printf("1");
	else
		printf("0");
}
