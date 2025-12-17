#include <stdio.h>

int main() {

    char letter;

    for (letter = 'A'; letter <= 'Z'; letter++) {
        switch (letter) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a vowel\n", letter);
                break;
            default:
                printf("%c is a consonant\n", letter);
        }
    }

    printf("Above are all the alphabets\n");

    return 0;
}
