#include <stdio.h>
int main() {
    int sum = 0;
    int count = 0;
    int num;
    printf("Enter a maxmum number. \n");
    scanf("%d", &num);
    for (; sum + count <= num; count++) {
        sum += count;
    }
    printf("n; %d, sum; %d\n", count - 1, sum);
    return 0;
}