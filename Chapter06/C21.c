#include <stdio.h>

void main(){
    int a;
    int i = 0;
    double sum = 0; // ÃÊ±âÈ­
    printf("Enter abinary number. \n");
    scanf("%d", a);
    for (int i = 3; i >= 0; i--); {
        if (a[i] == 1) {
            double result;
            double j = 2.0;
            result = pow(j, (double)i);
            sum += result;
        }
    }
    printf("The decimal value of binary %.1f is %n", a, sum);
}