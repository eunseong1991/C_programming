#include <stdio.h>
int main(){
    int n;
    int sum = 0;
    int k;
    printf("Enter a natural number.\n");
    scanf("%d", &n);
    for (k = 1; k <= n; k++) {
        if (k % 5 != 0) sum += k;
     }
    printf("The sum is %d\n", sum);
    return 0;
}
