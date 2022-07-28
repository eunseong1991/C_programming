#include <stdio.h>
#include <math.h>
int main() {
	int count = 0;
	double num, sum = 0, avg = 0;
	printf("Enter a natural numbrt.\n");
	while (1) {
		++count;
		scanf("%lf", & num);
		sum += num;
		avg = num / (double) count;
		printf("Current average is %lf\n", avg);
		if (num <= 0) {
			return 0;
		}
		while (num = getchar() != '\n' && num != EOF);
	}
	return 0;
}