#include <stdio.h>
int main() {
	int num;
	float pi = 0;
	float temp = 1;
	float p = -1;
	int n = 1;
	printf("Enter the number of terms.\n");
	scanf("%d", &num);
	while (n < num)
	{
		p *= -1;
		pi += p * 1 / temp;
		temp += 2;
		n++;
	}
	printf("PI evaluated to %d terms is %.10f", num, 4 * pi);
}