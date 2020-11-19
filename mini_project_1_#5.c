/******************************************************************************

    Connor Clark
    ELET-1102-001
    11/16/2020
    Mini Project 1 (#5)
    
    This program asks the user to input their age. Based on their age, the 
    program outputs their insurance price

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age < 25)
    {
        printf("Your yearly insurance cost is $5000");
    }
    
    else if (age >= 25 && age < 35)
    {
        printf("Your yearly insurance cost is $3500");
        printf("\nIf you've been a good boy, your yearly insurance cost is $3430");
    }
    
    else if (age >= 35 && age <50)
    {
        printf("Your yearly insurance cost is $2800");
    }

    else if (age >= 50)
    {
        printf("Your yearly insurance cost is $1500");
    }
    
    return 0;
}


