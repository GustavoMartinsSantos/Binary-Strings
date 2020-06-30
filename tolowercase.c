#include <stdio.h>
#include <string.h>

int main (void) {
    printf("Input a text: ");
    char text[10];
    scanf("%s",&text);

    printf("The decimals of this text are: ");
    for (int i = 0; i < strlen(text); i++)
        printf("%i ", text[i]);
    
    // f(x) = x + 32 -> to lowercase
    // f(65) = 65 (A) + 32 -> 97 (a)
    printf("\nlowercase %s is: ", &text);
    for (int cont = 0; cont < strlen(text); cont++) {
        if (text[cont] >= 'A' && text[cont] <= 'Z')
            printf("%c", text[cont] + 32);
        else
            printf("%c", text[cont]);
    }

    // y = x - 32 -> to uppercase
    // 65 (A) = 97 (a) - 32  
    printf("\nuppercase %s is: ", &text);
    for (int cont = 0; cont < strlen(text); cont++) {
        if (text[cont] >= 'a' && text[cont] <= 'z')
            printf("%c", text[cont] - 32);
        else
            printf("%c", text[cont]);
    }
}