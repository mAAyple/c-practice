#include <stdio.h>
#include <time.h>
//#include <stdint.h>
//#define TIME_UTC
int main()
{
	struct timespec ts;
	timespec_get(&ts, TIME_UTC);
	char buff[100];
	strftime(buff, sizeof buff, "%D %T", gmtime(&ts.tv_sec));
	//int my_seconds_age;
	//my_seconds_age = 913461330;
	//int my_epoch_age; 
	//my_epoch_age = &tv_sec - &my_seconds_age;
	//printf("I am" &my_seconds_age);
	//printf("%D &my_epoch_age");
	printf("My Age: %s", buff, ts.tv_sec);
}
