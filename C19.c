#include <stdio.h>
int main(){
    int t;
    int i;
    printf("Enter a sentence. \n");
    scanf("%hhd", &t);
        char text[] = "text";
    char chars[] = "aeiouAEIOU";
    int count = 0;
    for (int i = 0; text[i] != '\0'; ++i){
        for (int j = 0; chars[j] != '\0'; ++j)
            if (text[i] == chars[j])
                ++count;
    }
    printf("Vowel appears %d times.\n", count);
    return 0;
}