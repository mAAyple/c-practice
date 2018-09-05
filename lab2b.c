#include <stdio.h>


int main()
{
        //declare section
	float onenum;
	float *A;
	double twonum;
	double *B;	
        //print and scan section
        printf("Enter Number to convert to scientific notation: \n");
        scanf("%lf", &twonum );
	twonum = onenum;
	*A = onenum;
        printf("Here is the normal float:\n");
	printf("%f*/n", &twonum);
	printf("Here is the scientific notation:\n");
	printf("%E*\n", &onenum);
	printf("%e*\n", &onenum);
}

