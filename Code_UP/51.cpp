#include <stdio.h>

int main() {
	long long a, b;
	scanf("%lld", &a);
	scanf("%lld", &b);

	if (b >= a)
		printf("1");
	else
		printf("0");
}
