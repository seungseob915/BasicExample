#include <stdio.h>

int main() {
	float a;
	scanf("%f", &a);
	int b = (int)a;
	printf("%d\n%f", b, a-b);
}
