#include <stdio.h>

int main()
{
	int my_int;
	long my_long;
	unsigned int my_unsigned_int;
	unsigned long my_unsigned_long;
	printf("Please enter any numerical value here:\n");
	scanf("%d",&my_int);
	scanf("%ld",&my_long);
	scanf("%u",&my_unsigned_int);
	scanf("%lu",&my_unsigned_long);
	printf("Here is your number as:\n");
	printf("A int: %d \n", my_int );
	printf("A long: %ld \n", my_long );
	printf("An Unsigned int: %u \n", my_unsigned_int );
	printf("And a Unsigned long: %lu \n", my_unsigned_long );
	printf("Now where the fun begins...\n");
	printf("Here are your same numbers in hex!\n");
	printf("Your int: %x \n", my_int);
	printf("Your long: %lx \n", my_long);
	printf("Your Unsigned int: %x \n", my_unsigned_int);
	printf("Your Unsigned long: %lx \n", my_unsigned_long);
	printf("Thank you for helping out ! \n");

}
