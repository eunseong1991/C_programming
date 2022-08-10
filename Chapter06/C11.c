#include<stdio.h>
int main(){
    int a, b, i, small, sw;
    sw = 2;
    printf("Enter two numbers.\n");
    scanf("%d", "%d", &a, &b);
    if (a > b)
        small = b;
    else
        small = a;
    for (i = small; a > b; i--)
        if (a % i == 0 && b % i == 0)
        {
            sw = 1;
            break;
        }
    if (sw == 1)
        printf("They are not mutually prime");
    else
        printf("They are mutually prime");
    return 0;
}