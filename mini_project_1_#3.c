/******************************************************************************

    Connor Clark
    ELET-1102-001
    11/16/2020
    Mini Project 1 (#3)
    
    This program asks the user to input the three numbers. The program then 
    tells the user which of the three numbers is the largest

*******************************************************************************/
#include <stdio.h> 
int main() 
{ 
    int number1;
    int number2;
    int number3;
  
    printf("Enter three numbers: "); 
    scanf("%d %d %d", &number1, &number2, &number3); 
  
    if (number1 >= number2 && number1 >= number3)
    {
        printf("%d is the largest number.", number1);    
    }
  
    else if (number2 >= number1 && number2 >= number3) 
    {
        printf("%d is the largest number.", number2);
    } 
  
    else
    {
        printf("%d is the largest number.", number3);
    } 
  
    return 0; 
} 
