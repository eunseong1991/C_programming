#include <stdio.h>
int main() {
	int n;
	printf("Enter the number. \n");
	scanf("%d", &n);
	int div;
	for (div = 1; n / div > 0; div *= 10);
	div /= 10;
	int sum = 0;
	while (n > 0) {
		sum += n / div;
		n %= div;
		div /= 10;
	}
	printf("The sun is %d", sum);
	return 0;
}