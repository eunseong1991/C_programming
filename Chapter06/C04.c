#include <stdio.h>
int main() {
	int num;
	float pi = 0.0;
	float temp = 1.0;
	float p = -1.0;
	int n = 1;
	printf("Enter the number of terms.\n");
	scanf_s("%d", &num);
	while (n <= num)
	{
		p *= -1.0;
		pi += p * 1.0 / temp;
		temp += 2.0;
		n++;
	}
	printf("PI evaluated to %d terms is %.10f", num, 4 * pi);
}