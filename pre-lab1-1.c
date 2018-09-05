#include <stdio.h>

int main()
{
	int my_int;
	long long my_long;
	unsigned int my_unsigned_int;
	unsigned long long my_unsigned_long;
	printf("Please enter any numerical value here:\n");
	scanf("%d",&my_int);
	scanf("%lld",&my_long);
	scanf("%u",&my_unsigned_int);
	scanf("%llu",&my_unsigned_long);
	printf("Here is your number as:\n");
	printf("A int: %d", my_int );
	printf("\n");
	printf("A long: %lld", my_long );
	printf("\n");
	printf("An Unsigned int: %u", my_unsigned_int );
	printf("\n");
	printf("And a Unsigned long: %llu", my_unsigned_long );
	printf("\n");
	printf("Now where the fun begins...\n");
	printf("Here are your same numbers in hex!\n");
	printf("Your int: %x", my_int);
	printf("\n");
	printf("Your long: %llx", my_long);
	printf("\n");
	printf("Your Unsigned int: %x", my_unsigned_int);
	printf("\n");
	printf("Your Unsigned long: %llx", my_unsigned_long);
	printf("\n");
	printf("Thank you for helping out ! \n");
	return 0;

}
