#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Convert the following if-else-if construct into switch case:)

    int var;
    printf("\n1. Good.");
    printf("\n2. Better.");
    printf("\n3. Best.");

        printf("\n\nEnter Varible number.: ");
        scanf("%d", &var);

        switch (var)
        {
            case 1 : printf("Good.");
                    break;
            
            case 2 : printf("Better.");
                    break;
            
            case 3 : printf("Best.");
                    break;

            default : printf("Invalid.");
            
        }


    printf("\n");
    return 0;
}
