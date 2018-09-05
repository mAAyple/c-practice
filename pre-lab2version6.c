#include <stdio.h>
int main()
{
	long place;
        int plate;
	int *a;
	long long my_long;
        long long *b;
        unsigned int my_unsint;
        unsigned int *c;
        unsigned long long my_unslong;
        unsigned long long *d;
        printf("Please enter any numerical value here:\n");
        scanf( "%ld",&place);
	plate = place;
	my_long = place;
	my_unsint = place;
	my_unslong = place;
	a = &plate;
        b = &my_long;
        c = &my_unsint;
        d = &my_unslong;
	printf("Here is your number as:\n");
        printf("An int:");
        printf("%d\n", plate );
	printf("\n");
        printf("A long:");
        printf("%lld\n", *b );
	printf("\n");
        printf("An Unsigned int:");
        printf("%u\n", *c );
	printf("\n");
        printf("And a Unsigned long:");
        printf("%llu\n", *d );
	printf("Now where the fun begins...\n");
        printf("Here are your same numbers in hex!\n");
        printf("Your int:");
        printf("%x\n", plate );
	printf("\n");
        printf("Your long:");
        printf("%llu\n", *b );
	printf("\n");
        printf("Your Unsigned int:");
        printf("%x\n", *c );
	printf("\n");
        printf("Your Unsigned long:");
        printf("%llx\n", *d );
	printf("\n");
        printf("Thank you for helping out ! \n");
}


