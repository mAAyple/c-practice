#include <stdio.h> 
#include <string.h>
#define OMEGA "\u03a9"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"
#define MAGENTA "\033[35m"
#define BOLDRED "\033[1m\033[31m"
#define BOLDGREEN "\033[1m\033[32m"
#define BOLDMAGENTA "\033[1m\033[35m"
int main() {
	char ch;
    char chr;
    float inres1;
    float inres2;
    float inres3;
    //double series;
	//double parellel;
	float resultant;
    //double energy;
    //double power;
    //double hours;
    printf("All values will be in \n");
	printf("%10s\n", OMEGA);
	printf("Please keep values between 100 %s ", OMEGA);
    printf("and 10000 %s\n", OMEGA);
    printf("Please select an option: \n");
    printf( RED "1. Enter 1 for resistance in series\n" RESET );
    printf( GREEN "2. Enter 2 for resistance in parrellel\n" RESET );
    printf( MAGENTA "3. Enter 3 for Power and energy\n" RESET );
    printf( BOLDMAGENTA "4. Enter 4 for an Ohms Law Calculator\n" RESET );
    printf("\n\n\n\n\n");
    printf("5. Press 5 to quit\n\n");
    scanf("%c",&ch);
    if((ch) == '1') {
        printf("Enter your first resistor value: \n");
        scanf("%f",&inres1);
        printf("Enter your second resistor value: \n");
        scanf("%f",&inres2);
        printf("Enter your third resistor value: \n");
        scanf("%f",&inres3);
        resultant = inres1 + inres2 + inres3;
        printf("Here is the resistance in");
        printf( RED " SERIES\n" RESET );
        printf("%f", resultant);
        printf("%10s\n", OMEGA);
    }
    else if((ch) ==  '2') {
        printf("Enter your first resistor value: \n");
        scanf("%f",&inres1);
        printf("Enter your second resistor value: \n");
        scanf("%f",&inres2);
        printf("Enter your third resistor value: \n");
        scanf("%f",&inres3);
        resultant = (1 / inres1) + (1 / inres2) + (1 / inres3);
        printf("Here is the resistance in");
        printf( RED " PARRELLEL\n" RESET  ); 
        printf("%f", resultant);
        printf("%10s\n", OMEGA);
    }
    else if((ch) == '3') {
        printf("Enter the amount of time the Wattage is being use, please stay between 1 to 168 hours: \n");
        scanf("%f",&inres1);
        printf("Enter the Wattage rating of the electonic in question: \n");
        scanf("%f",&inres2);
        resultant = (inres1 * inres2);
        printf("Here is the");
        printf( MAGENTA " POWER\n" RESET ); 
        printf("%f", resultant);
        printf("in Watt-Hours\n");
    }
    else if((ch) == '4') {
        printf( BOLDMAGENTA "Ohms law calculator.\n" RESET );
        printf("Please choose from following calculcations.\n");
        printf("1. choose 1 to calculate the voltage.\n");
        printf("2. choose 2 to calculate the current.\n");
        printf("3. choose 3 to calculate the resistance.\n");
        printf("Anything else to quit.\n\n ");
        scanf(" %c",&chr);
            switch(chr) {
            case '1' :
            printf("please enter the current in amps.\n");
            scanf("%f",&inres1);
            printf("Now enter the resistance in ohms.\n");
            scanf("%f",&inres2);
            resultant = inres1 * inres2;
            printf("The voltage is %0.2f volts.\n", resultant);
            break;
            case '2' :
            printf("please enter the voltage in volts.\n");
            scanf("%f",&inres1);
            printf("Now enter the resistance in ohms.\n");
            scanf("%f",&inres2);
            resultant = inres1 / inres2;
            printf("The current is %0.2f amps.\n", resultant);
            break;
            case '3' :
            printf("please enter the voltage in volts.\n");
            scanf("%f",&inres1);
            printf("Now enter the current in amps.\n");
            scanf("%f",&inres2);
            resultant = inres1 / inres2;
            printf("The resistance is %0.2f ohms.\n", resultant);
            break;
        }
    
    }

}
