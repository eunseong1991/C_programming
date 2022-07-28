#include <stdio.h>
int main() {
    int num, sum, i;
    printf("Enter the number of terms.\n");
    scanf("%d", &num);
    sum = 0;
    for (int i = 0; i < num; i++)
        sum += sum * 10 + 9;
    printf("The sum is %d.\n", sum);
    return 0;
}