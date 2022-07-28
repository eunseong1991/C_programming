#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a;
	int b;
	int i;
	int sum = 0;
	{
		printf("Enter base and power.\n");
		scanf("%d", &a);
		scanf("%d", &b);
			for (i = b; i <= b; i++) {
				sum += pow(a, b);
			}
	}
	printf("%d to the power of %d is %d", a, b, sum);
}