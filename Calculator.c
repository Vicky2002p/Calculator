//****C caluculator****//
//******by Vivek*******//

//Defining the libraries
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h> 
#define e 2.718


//Function prototype
void welcomeMessage();
char outputList();
double operationB();
void operationU();

//Global variable declaration
double num1, num2, result;
char inputM,input;
double a,b,c,d,e1;


int main(){
   //Local variables
   char ans;

   //Printing message
    welcomeMessage();
    while(ans != 'X' && ans != 'x'){

       //Calling function
      ans = outputList();
       if(ans == 'X'||ans == 'x'){
          continue;
       }
       //Switch cases for the inputs
       switch(ans){
         case 'B':
         //Calling function and returning value in ans
            ans = operationB();
            continue;
         case 'U': 
         //Calling function and returning value in ans
            operationU();
            continue;;          
         default:
            puts("Invalid Input!");
            continue;
       }
        
    }
    return 0;

}

//Making a function to produce the first Output
void welcomeMessage(){
    puts("Welcome to my Command-Line Calculator");
    puts("Developer: Vivek Patel");
    puts("Date: 25/11/2021");
    puts("-----------------------------------------");
}

//Function defination for list of characters to be inputed
char outputList(){
    char ans= 'a';
    puts("Please select one of the following items:");
    puts("B) - Binary Mathematical Operations such as addition and subtraction.");
    puts("U) - Unary Mathematical Operations, such as square root, and log");
    puts("X) - Exit");
    while(ans !='B'&& ans !='U'&& ans !='X'){
    puts("Please select your option (B, U, X):");
    scanf(" %c",&ans);

    //Converting the input to capital
    ans= toupper(ans);
}
    return ans;
}

//Function defination
double operationB(){
   char operatorB, ans;
   int x,y,n;
   puts("Enter the first number:");

   //Validating the input
   while(scanf("%lf", &num1) !=1){

      //Discarding the scaned input
      fflush(stdin);
      puts("Invalid input, please enter again:");
   }
   while(operatorB!='+' && operatorB!='-' && operatorB!='*' && operatorB!='/' && operatorB!='%' && operatorB!='^'){
   puts("Please enter the operator( +, -, *, /, %, ^):");
   scanf(" %c", &operatorB);
   }
   puts("Enter the second number:");

   //Validating input of second number
   while(scanf("%lf", &num2) !=1){
      fflush(stdin);
      puts("Invalid input, please enter again:");
   }

   //Condition for if the denominator is zero
   if(operatorB=='/'&& num2 == 0){
      puts("Zero cannot be in the denominator");
       ans = 'X';
   }

   //Switch statement for all operators
       switch(operatorB){
            case '+':
               result = num1+num2;
               printf("%.2lf\n\n", result);
               break;
            case '-':
               result = num1-num2;
               printf("%.2lf\n\n", result);
               break;
            case '*':
               result = num1*num2;
               printf("%.2lf\n\n", result);
               break;
            case '/':
               result = num1/num2;
               printf("%.2lf\n\n", result);
               break;
            case '%':
               x = num1;
               y = num2;
               n = x%y;
               printf("%d\n\n", n);
               break;
            case '^':
               result = pow(num1,num2);
               printf("%.2lf\n\n", result);
               break;
            default:
               puts("Invalid Input!\n");
            }
            return ans;
}

//Function defination
void operationU(){
   char operatorU;
   puts("Enter the a number:");
   while(scanf("%lf", &num1)!=1){
      fflush(stdin);
      puts("Please enter the number again");
   }
   
   puts("Please enter a urinary operator");
   while(operatorU!='S' && operatorU!='L' && operatorU!='E' && operatorU!='C' && operatorU!='F' && operatorU!='X'){
   puts("S (for sqare root), L (for logarithm), E (for exponentiation), C (for smallest integer value greater than or equal to your input), F (for the largest integer value samller than or equal to x):");
   scanf(" %c", &operatorU);
   operatorU = toupper(operatorU);
   }
   //Switch statement for operator
            switch(operatorU){
               case 'S':
                  result = sqrt(num1);
                  printf("%.2lf\n\n", result);
                  break;
               case 'L':
                  result = log(num1);
                  printf("%.2lf\n\n", result);
                  break;
               case 'C':
                  result = floor(num1);
                  printf("%.2lf\n\n", result);
                  break;
               case 'E':
                  result = pow(e,num1);
                  printf("%.2lf\n\n", result);
                  break;
               case 'F':
                  result = ceil(num1);
                  printf("%.2lf\n\n", result);
                  break;
               case 'X':
                  break;
               default:
                  puts("Invalid Input!");
            }
}

//Ending program