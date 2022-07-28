#include <stdio.h>
int main(){
	int num;
	printf("Enter a natural number. \n");
	scanf("%d", &num);
	for (num <= 0; num > 0; num /= 10)
		{
			printf("%d", num % 10);
		}
		return 0;
}