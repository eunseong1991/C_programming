#include <stdio.h>

void main()
{
	char a;
	printf("Enter the key. \n");
	while (1) {
		scanf("%c", &a);
		printf("%c", a + 3);
	}
}