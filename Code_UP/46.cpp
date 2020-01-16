#include <stdio.h>

int main() {
	long long a, b, c, d;
	float e;
	scanf("%lld", &a);
	scanf("%lld", &b);
	scanf("%lld", &c);
	d = a + b + c;
	e = ((float)d/3);
	
	printf("%lld\n%.1f", d, e);
}