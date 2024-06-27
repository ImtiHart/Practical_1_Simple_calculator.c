#include <stdio.h>
#include <stdlib.h>

/*Initialize variable*/
float num1, num2, answer;
char operation;

/*Ask for to numbers and operator to implement in calculation. Identify the case to execute.
 Make sure that the second number can not be 0 in a division operation because it does not have a solution.
 If input is not in code, automatically set a default of 'ANSWER UNKNOWN!!!'*/
int main()
{
   printf("Enter the first number: ");
   scanf("%f", &num1);
   printf("Enter the second number: ");
   scanf("%f", &num2);
   getchar();
   printf("Enter the operation (+, -, *, /, ^ (for power), r (for square root)): ");
   scanf("%c", &operation);

   switch(operation)
   {
   case '+':
    answer=num1+num2;
    printf("The answer is: %.4f", answer);
    break;
   case '-':
    answer=num1-num2;
    printf("The answer is: %.4f", answer);
    break;
   case '*':
    answer=num1*num2;
    printf("The answer is: %.4f", answer);
    break;
   case '/':
    if (num2!=0){
        answer=num1/num2;
        printf("The answer is: %.4f", answer);
    }
    else{
        printf("ANSWER UNKNOWN!!!");
    }
    break;
   case '^':
    answer= pow(num1, num2);
    printf("The answer is: %.4f", answer);
    break;
   case 'r':
    answer= sqrt(num1);
    printf("The answer is: %.4f", answer);
    break;
   default:
    printf("ANSWER UNKNOWN!!!");
    break;
   }
   return 0;
}

