#include <stdio.h>

int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d\n%.2lf", a+b, a-b, a*b, a/b, a%b, (double) a/b);
}