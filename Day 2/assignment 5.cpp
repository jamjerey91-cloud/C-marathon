#include <stdio.h>
int main() {
   
  	int num, tens, units;
  
  	printf("Enter a two-digit integer: ");
  	scanf("%d", &num);
  
  	tens = num / 10;
  	units = num / 10;
  
  	printf("tens digits: %d\n", tens);
	printf("units digits: %d\n", units);

    return 0;
}
