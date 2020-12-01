/******************************************************************************
    Connor Clark, Ethan Moore, Mitch Hoover
    ELET-1102-001
    11/16/2020
    Mini Project 1 (#1)
    
    This program tells a party at a restaraunt where to sit based on the amount 
    of people in the party
*******************************************************************************/
#include <stdio.h>

int main()
{
    int guests;
    printf("Welcome!\nHow many people are in your party? ");
    scanf("%d", &guests);
    
    if (guests == 1)
        printf("Please wait to be seated at the bar.");
        
    if (guests == 2)
        printf("Please wait to be seated at a small table.");
    
    if (guests == 3 || guests == 4)
        printf("Please wait to be seated at a medium table.");
        
    if (guests == 5 || guests == 6)
        printf("Please wait to be seated at a large table.");
        
    if (guests == 7 || guests == 8)
        printf("Please wait to be seated at a booth.");
        
    if (guests > 8)
        printf("Please wait 45 minutes or make a reservation for later.");
    
    if (guests <= 0)
        printf("Please enter a positive number greater than 0.");

    return 0;
}
