//Write a program that calculates how many digits a number contains: 
// You may assume that the number had no more than four digits. 
// Use if statements to test the number. 
//For example, if the number is between 0 and 9, it had one digit 
// If the number is between 10 and 99, it has two digits 

#include <stdio.h>

int main() {
	int number = 0; 
	printf("Enter a number with less than 5 digits: "); 
	scanf_s("%d", &number); 

	if (number <= 9) {
		printf("The number %d has one digit", number);
	}
	else if (number <= 99) {
		printf("The number %d has two digits", number);
	}
	else if (number <= 999) {
		printf("the number %d has three digits", number);
	}
	else if (number <= 9999) {
		printf("the number %d has four digits", number);
	}
	else
		printf("the number %d is too large", number); 
}