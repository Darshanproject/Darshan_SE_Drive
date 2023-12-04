#include <stdio.h>

int main() {
    // Declare variable to store a character
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert the character to lowercase for case-insensitive comparison
    ch = tolower(ch);

    // Check whether the character is a vowel or a consonant
    switch(ch) {
        case 'a':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'e':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'i':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'o':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        case 'A':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'E':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'I':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'O':
        	printf("%c is a vowel.\n", ch);
            break;
        case 'U':
        	printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
    }

    return 0;
}

