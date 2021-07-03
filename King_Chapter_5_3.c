//Modify the broker.c program by making both of the following change: 
//Ask the user to enter the number of shares and the price per share, instead of the value of the trade. 
//Add statements that compute the commission charged by a rival broker. 
//Display the rivals commission as well as the commission charged by the original broker. 
#include <stdio.h>

int main() {
	float shares = 0, price = 0, commission = 0, rcommission = 0; 

	printf("Enter the number of shares: "); 
	scanf_s("%f", &shares); 
	printf("Enter the price per share: "); 
	scanf_s("%f", &price); 


	if (shares < 2000.00f)
	{
		rcommission = 33.00f + .03f * shares; 
	}
	else if (shares >= 2000.00f) {
		rcommission = 33.00f + 0.02f * shares; 
	}
}
