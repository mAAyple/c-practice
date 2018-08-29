#include <stdio.h>
#include <time.h>
#include <stdint.h>
int main()
{
	int timespec_get( struct timespec *ts int base);
	time_t result = time(NULL);
	int my_age;
	my_age = 19;
	int my_seconds_age;
	my_seconds_age = 913461330;
	int my_epoch_age; 
	my_epoch_age = TIME_UTC - my_seconds_age;
	if(result != -1)
		printf("I am my_seconds_age/n");
		printf("%s my_epoch_age");
}
