#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	while (n != 0) {
		printf("%d ", n);
		scanf("%d", &n);
	}
	return 0;
}
