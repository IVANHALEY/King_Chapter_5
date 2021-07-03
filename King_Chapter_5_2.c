// Write a program that asks the use for a 24 hour time, then displays 
// the form ...
#include <stdio.h>

int main() {
	int hour = 0, min = 0; 
	printf("Enter a 24 hour time: "); 
	scanf_s("%d:%d", &hour, &min); 

	if (hour == 0) {
		hour = hour + 12; 
		printf("Equivalent 12 - hour time: %02d:%02dAM", hour, min);
	}
	else if (hour > 0 && hour < 12) {
		if (hour <= 11) {
			printf("Equivalent 12- hour time:%d:%02dAM", hour, min); 

		}
	}
	else if (hour == 12) {
		printf("Equivalent 12 - hour time:%d:%02dPM", hour, min); 
	}
	else if (hour > 12) {
		hour = hour - 12; 
		printf("Equivalent 12- hour time: %d:%02dPM", hour, min); 
	}
}
