#include<stdio.h>

int main()
{
	int n, s;
	
	scanf("%d", &n);

	rego:
	scanf("%d", &s);
	printf("%d\n", s);
	if (n-- != 1)
		goto rego;

	return 0;
}
