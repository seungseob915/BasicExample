#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	while (a != 0) {
		printf("%d\n", a);
		scanf("%d", &a);
	}
	return 0;
}

/*
#include<stdio.h>

int main()
{
	int n;
        
        again:
	scanf("%d", &n);
	printf("%d\n", n);

	if(n != 0) 
		goto again;

	return 0;
}
*/