#include <stdio.h>
int main() {
   
   float original_price, discount_percent, discount_amount, final_price;
   
   printf("Enter the original_price: ");
   scanf("%f", &original_price);
   
   printf("Enterthe discount_percent: ");
   scanf("%f", &discount_percent);
   
   discount_amount = (original_price * discount_percent) / 100.0f;
  
   final_price = original_price - discount_percent;
   
   printf("discount_percent = %.2f\n", discount_percent);
   printf(" final_price = %.2f\n", final_price);

    return 0;
}
