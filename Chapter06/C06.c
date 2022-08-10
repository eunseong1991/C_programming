#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a;
	int b;
	int i;
	int n;
	int sum = 1;
    printf("Enter base and power.\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	for (i = 1; i <= b; i++) {
		sum = sum * a;
	}
	printf("%d to the power of %d is %d", a, b, sum);
}