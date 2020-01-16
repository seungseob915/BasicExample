#include <stdio.h>

int main() {
	int a, b, c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%d", (a > b ? b : a)<c?(a > b ? b : a):c); //3항연산자
}
