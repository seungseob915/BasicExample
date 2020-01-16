#include <stdio.h>

int main() {
	char data[2001];
	fgets(data, 2001, stdin);
	printf("%s", data);
}