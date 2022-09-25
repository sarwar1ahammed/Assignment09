#include <stdio.h>
#include <stdlib.h>
int main()
{

    // Another menu driven program.

    int oper, len1, len2, len3;
    printf("\n1. Isosceles triangle.");
    printf("\n2. Right angle triangle.");
    printf("\n3. Equilateral triangle.");
    printf("\n4. Exit.");

    while (1)
    {
        printf("\n\nEnter Operation Number from the Given list.: ");
        scanf("%d", &oper);

        switch (oper)
        {

            case 1 : printf("\nEnter three length of sides : ");
                    scanf("%d %d %d", &len1, &len2, &len3);
                    if (len1 == len2 || len2 == len3 || len3 == len1)
                        printf("Isosceles triangle.");
                    else 
                        printf("Not an Isosceles triangle.");
                    break;

            case 2 : printf("\nEnter three length of sides : ");
                    scanf("%d %d %d", &len1, &len2, &len3);
                    if (len1*len1 == len2*len2 + len3*len3 || len2*len2 == len3*len3 + len1*len1 || len3*len3 == len1*len1 + len2*len2)
                        printf("Right angle triangle.");
                    else 
                        printf("Not a Right angle triangle.");
                    break;

            case 3 : printf("\nEnter three length of sides : ");
                    scanf("%d %d %d", &len1, &len2, &len3);
                    if ((len1 == len2) && (len2 == len3))
                        printf("Equilateral triangle.");
                    else 
                        printf("Not an Equilateral triangle.");
                    break;

            case 4 : exit(0);

            default : printf("Invalid Operation number.");
                
            
        }
    }
    

    printf("\n");
    return 0;

}
