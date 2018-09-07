#include <stdio.h>


int main()
{
        //declare section
	float onenum = 0.0;
	float *A;
	double twonum = 0.0;
	double *B;
	//print and scan section
        printf("Enter Number to convert to scientific notation: \n");
        scanf("%f", &onenum );
	A = &onenum;
        B = &twonum;
	twonum = onenum;
        printf("Here is the normal float:\n");
	printf("%f\n", *A);
	printf("Here is the scientific notation:\n");
	printf("%E\n", *B );
	printf("%e\n", *B );
}

