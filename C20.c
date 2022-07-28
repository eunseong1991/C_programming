#include <stdio.h>
int main()
{
    int num = 0, low = 0, notchar = 0;
    char c;
    int i = 0;
    do {
        scanf("%c", &c);
        if (i == 0 && islower(c)) low++;
        if (isdigit(c)) num++;
        if (!isalpha(c) && !isdigit(c) && c != '\n') notchar++;
        i++;
    } while (c != '\n');
    if (i <= 8 && low != 0 && num != 0 && notchar == 0)
        printf("It's a legal ID.\n");
    return 0;
}