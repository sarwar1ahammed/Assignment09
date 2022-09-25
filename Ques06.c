#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Whether a year is a leap year or not.

    int year;  

        printf("\n\nEnter cheking year : ");
        scanf("%d", &year);

        switch (year % 100 == 0)
        {
            case 1 : switch (year % 400 == 0)
                    {
                        case 1 : printf("Given year is a leap year.");
                                break;
                        case 0 : printf("Given year is not a leap year.");
                                break;
                    }   break;

            case 0 : switch (year % 4 == 0)
                    {
                        case 1 : printf("Given year is a leap year.");
                                break;
                        case 0 : printf("Given year is not a leap year.");
                                break;
                    }   break;

        }

    printf("\n");
    return 0;
}
