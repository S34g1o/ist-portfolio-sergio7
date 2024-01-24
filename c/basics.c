#include <stdio.h>

int main()
{
	printf ("hello");

	int num;	// type name;
	printf("Give me a number: ");	// prompt user for a number
	
	scanf("%i", &num);		// store user input in num

	printf("You entered %i\n", num);	
	return 0;
}
