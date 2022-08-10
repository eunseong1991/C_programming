#include <stdio.h>
int main()
{
    int a, b, c;
    int num;
    int count = 0;
    printf("Enter the maximum length N.\n");
    scanf("%d", &num);
    for (a = 1; a < num; a++)
        for (b = 1; b < num; b++)
            for (c = 1; c <= num; c++)
            if (a * a + b * b == c * c)
            {
                printf("(%d,%d,%d)\n", a, b, c);
                count++;
            }
    return 0;
}