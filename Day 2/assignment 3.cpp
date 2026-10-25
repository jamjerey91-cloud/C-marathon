#include <stdio.h>
int main() {
   
   float principle, rate, time, interest;
   
   printf("Enter principle amount: ");
   scanf("%f", &principle);
   
   printf("Enter annual interest rate (in %%) : ");
   scanf("%f", &rate);
   
   printf("Enter time (in years)t: ");
   scanf("%f", &time);
   
   interest = (principle * rate * time) / 100.0f;
   
   printf("simple interest = %.2f\n", interest);

    return 0;
}
