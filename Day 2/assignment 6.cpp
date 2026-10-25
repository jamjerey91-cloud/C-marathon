#include <stdio.h>
int main() {
   
  	int num, tens, units, hundreds, sum;
  
  	printf("Enter a three-digit integer: ");
  	scanf("%d", &num);
  
  	hundreds = num / 100;
	tens = (num / 10) % 10;
  	units = num % 10;
  	
  	sum = hundreds + tens + units;
  
  	printf("sum of digits (%d + %d + %d) = %d\n)", hundreds, tens, units, sum);

    return 0;
}
