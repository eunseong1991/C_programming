#include <stdio.h>
int main()
{
    int n;
    char str[4];
    printf("Enter a number.\n");
    scanf("%d", &n);
   for (int i = 1; i <= n; ++i)
    {
        sprintf(str, "%d", i);
        int count = 0;
        for (int j = 0; str[j] != '\0'; ++j)
        {
            if (str[j] == '3' || str[j] == '6' || str[j] == '9')
                ++count;
        }
        if (count)
        {
            for (int j = 0; j < count; ++j)
                printf("!");
        }
        else
            printf("%d", i );
   }
   return 0;
}