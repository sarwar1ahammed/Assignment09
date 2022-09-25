#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*
        Takes the day number of a week and displays 
        a unique greeting message for the day.

    */

    int dayNum;
    printf("\nFor Exit the program enter '8'.");
    while (1)
    {
        printf("\n\nEnter a Day number.: ");
        scanf("%d", &dayNum);

        switch (dayNum)
        {
            
            case 1 : printf("Today is Monday, Again Wlcm in your Professional life.");
                    break;
            
            case 2 : printf("Today is Tuesday, Second day of Week.");
                    break;

            case 3 : printf("Today is Wednesday, Another boaring day of Week.");
                    break;
            
            case 4 : printf("Today is Thursday, Once again.");
                    break;

            case 5 : printf("Today is Friday, Relaxtion is coming :).");
                    break;
            
            case 6 : printf("\nToday is Saturday, Half day of Week.");
                    break;

            case 7 : printf("Today is Sunday, Chilllll !!!! :::))).");
                    break;

            case 8 : exit(0);

            default : printf("Invalid Day Number. :(");

            
        }
    }


    printf("\n");
    return 0;

}
