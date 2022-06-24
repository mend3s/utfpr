#include <stdio.h>
#include <math.h>

int main(){
	
	printf("\nvalor 123.456 truncado = %f",trunc(123.456));
	
	printf("\nvalor 123.456 (int) = %d",(int)123.456);
	
	printf("\n\nvalor 123.456 round = %f",round(123.456));
	printf("\nvalor 123.556 round = %f",round(123.556));
	printf("\nvalor 123.654 round = %f",round(123.654));
	
	printf("\n\nvalor 123.456 ceil  = %f",ceil(123.456));
	printf("\nvalor 123.556 ceil  = %f",ceil(123.556));
	printf("\nvalor 123.654 ceil  = %f",ceil(123.654));

	printf("\n\nvalor 123.456 floor = %f",floor(123.456));
	printf("\nvalor 123.556 floor = %f",floor(123.556));
	printf("\nvalor 123.654 floor = %f",floor(123.654));
	
	printf("\n\nparte fracionaria de 123.654 = %f",123.654 - (int)123.654);
	
	return 0;
}