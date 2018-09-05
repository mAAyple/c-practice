#include <stdio.h>

int main()
{
	int my_int;
	int *a;
	long long my_long;
	long long *b;
	unsigned int my_unsint;
	unsigned int *c;
	unsigned long long my_unslong;
	unsigned long long *d;
	printf("Please enter any numerical value here:\n");
        scanf( "%d %lld %u %llu",&my_int,&my_long,&my_unsint,&my_unslong);
        a = &my_int;
	b = &my_long;
	c = &my_unsint;
	d = &my_unslong;
	getchar();
	printf("Here is your number as:\n");
	printf("An int:");
	printf("%d\n", *a );
	//printf("%d", my_int );
	printf("\n");
	printf("A long:");
	printf("%lld\n", *b );
	//printf("%lld", my_long );
	printf("\n");
	printf("An Unsigned int:");
	printf("%u\n", *c );
	//printf("%u", my_unsint );
	printf("\n");		
	printf("And a Unsigned long:");
	printf("%llu\n", *d );
	//printf("%llu", my_unslong );
        printf("\n");
        printf("Now where the fun begins...\n");
        printf("Here are your same numbers in hex!\n");
	printf("Your int:");
	printf("%x\n", *a );
	//printf("%x", my_int );
	printf("\n");
	printf("Your long:");
	printf("%llu\n", *b );
	//printf("%llu", my_long);
	printf("\n");
	printf("Your Unsigned int:");
	printf("%x\n", *c );
	//printf("%x", my_unsint );
	printf("\n");
	printf("Your Unsigned long:");
	printf("%llx\n", *d );
	//printf("%llx", my_unslong );
        printf("\n");
        printf("Thank you for helping out ! \n");
        return 0;
}	
