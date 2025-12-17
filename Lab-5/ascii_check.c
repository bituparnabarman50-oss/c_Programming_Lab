#include <stdio.h>

int main() {
    
    char letter;

    printf("Enter a character: ");
    scanf("%c", &letter);

    if (letter >= 65 && letter <= 90) {
        printf("Given input is an uppercase letter");
    } 
    else if (letter >= 97 && letter <= 122) {
        printf("Given input is a lowercase letter");
    } 
    else if (letter >= 48 && letter <= 57) {
        printf("Given input is a number");
    } 
    else {
        printf("Given input is a special symbol");
    }

    return 0;
}
