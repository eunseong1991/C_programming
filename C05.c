#include <stdio.h>
main() {
    int i;
    int j = 1;
    int num;
    printf("Enter a natural number. \n");
    scanf("%d", &num);
    for (i = num; j <= num; j++) {
        if (i % j == 0)
        printf("%d\n", j);
        else
        continue;
    }
}