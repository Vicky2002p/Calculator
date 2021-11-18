//Writing a C program for calculation simple and compound interest
#include <stdio.h>
#include <math.h>

int main()
{
    //integers decleration
    int ans, t;
    //float variables for rate of interest, simple interest, compound interest, principle amount and time
    float r, si, ci, p;
    ans=1;
    //initiating the loop
    while(ans == 1){

        printf("If you wish to calculate interest, enter 1, else 0\n");
        scanf("%d", &ans);
        if (ans == 0){
            break;
        }
        //Taking inputs and assigning to respective variables
        printf("Please enter your principle amount:\n");
        scanf("%f", &p);
        printf("Enter the rate of interest:\n");
        scanf("%f", &r);
        printf("Please enter the number of years you wish to keep the amount:\n");
        scanf("%d", &t);
        
        printf("Please enter 1 if you wish to have simple interest or 2 if you wish to have compound interest:\n");
        scanf("%d", &ans);
        //Condition for simple interest or compound interest
        if (ans==1){
                //calcualting the simple interest
                si= (p*r*t)/100;
                printf("As per the inputs, your simple interest should be %.2f,\nOn the princlple amount %.2f.\n\n", si, p);
                continue;
                }
        if (ans==2){
                //calculating compound interest
                ci= p*pow((1 + (r/100)),t);
                printf("The total value of your investment is %.2f,\nOn the princlple amount %.2f,\nWith total interest earned %.2f\n\n", ci, p, ci-p);
                continue;
                }
    }
    
    return 0;
}

