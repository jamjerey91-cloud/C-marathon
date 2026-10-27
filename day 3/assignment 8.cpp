#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (!isalpha(ch)) {
        printf("Error: '%c' is not an alphabetic character.\n", ch);
    } else {
        ch = tolower(ch); // Convert to lowercase to simplify checks
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    }

    return 0;
}
