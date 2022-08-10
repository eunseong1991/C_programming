#include <stdio.h>
main() {

    int num;
    float n;
    int i;
    float sum = 0.0;

    printf("Enter the number of iteeration. \n");
    scanf_s("%d", &num); 
    
    n = (float) num;
    printf("%f\n", n);
    printf("%d\n", num);

    for (i = 1 ; i <= num; i++) {
        sum = sum + 1.0 / n;

        printf("%f\n", sum);
    }
    
    printf("%d\n", sum);
}