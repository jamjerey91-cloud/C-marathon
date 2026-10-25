#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("Enter num3: ");
    scanf("%d", &num3);

    float average = (float)(num1 + num2 + num3) / 3.0f;

    printf("average I %.2f\n ", average);

    return 0;
}

