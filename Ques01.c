#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*   takes the month number as an input and display
        number of days in that month.
    */
   int month;  
   printf("\nFor Exit the Program enter 13.");  

   while (1)
   {
      printf("\nEnter Month number (1-12).: ");
      scanf("%d", &month);

      switch (month)
      {

         case 1 : printf("January has 31 Days.");
                     break;
                  
         case 2 : printf("February has 28 Days.");
                     break;
                     
         case 3 : printf("March has 31 Days.");
                     break;
                  
         case 4 : printf("April has 30 Days.");
                     break;
                  
         case 5 : printf("May has 31 Days.");
                     break;
                  
         case 6 : printf("June has 30 Days.");
                     break;
                  
         case 7 : printf("July has 31 Days.");
                     break;
                     
         case 8 : printf("August has 31 Days.");
                     break;
                     
         case 9 : printf("September has 30 Days.");
                     break;
                     
         case 10 : printf("October has 31 Days.");
                     break;   
                     
         case 11 : printf("November has 30 Days.");
                     break;   
                     
         case 12 : printf("December has 31 Days.");
                     break;

         case 13 : exit(0);
                     

         default : printf("You've enter an invaild number.");
                     
      }


   }


    printf("\n");
    return 0;
}
