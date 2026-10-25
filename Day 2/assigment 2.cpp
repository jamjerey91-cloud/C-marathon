#include <stdio.h>
int main() {
    long total_minutes;

    printf("Enter long total_minutes: ");
    scanf("%ld", &total_minutes);

    long days = total_minutes / 1440;
    long hours = (total_minutes % 1440) / 60;
    long minutes = total_minutes % 60;

    printf("%ld minutes is equal to %ld days, %ld hours, and %ld minutes.\n", total_minutes,days, hours, minutes);

    return 0;
}
