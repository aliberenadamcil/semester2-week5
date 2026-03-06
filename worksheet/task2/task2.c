/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Ali Beren Adamcil 
 * ID:202018616
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");

	scanf("%s", hex);

	int length = strlen(hex);

	for(int i = 0; i < length; i++){
		char c = hex[length - 1 - i];
		int value;
		
		if (c >= '0' && c <= '9') {
			value = c - '0';
		} else if (c >= 'A' && c <= 'F') {
			value = c - 'A' + 10;
		} else if (c >= 'a' && c <= 'f') {
			value = c - 'a' + 10;
		} else {
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}
		
		decimal += value * (1L << (4 * i)); // equivalent to value * pow(16, i)
	}


	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}