#include <stdio.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch); // Note the space before %c to clear any lingering newline characters

    printf("Character: %c\n", ch);
    printf("ASCII Value (integer representation): %d\n", ch);
    printf("Character after adding 1: %c (ASCII: %d)\n", ch + 1, ch + 1);

    return 0;
}
