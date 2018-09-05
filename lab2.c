#include <stdio.h>


int main()
{
	//the char array
	char base_dig[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int convert[64];
	long int numtest;
	int base, index=0;
	//print and scan section
	printf("Enter Number to convert: \n \n");
	scanf("%ld", &numtest );
	printf("Now enter a base between 2 and 16: \n\n");
	scanf("%i", &base);
	//Now for the convertion math
	while (numtest |= 0, numtest > 0)
	{
		convert[index] = numtest % base;
		numtest = numtest / base;
		++index;
	}
	
	//Now for the results

	printf("\n \n Converted Number = ");
	for(; index >= 0; index--) //flipping back into the desired point in the array
	{
	
		printf("%c", base_dig[convert[index]]);

	
	}
	//final space
	printf("\n");	
}
