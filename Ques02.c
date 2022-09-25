#include <stdio.h>
#include <stdlib.h>
int main()
{
    // A menu driven program.

    int opNum;
    float a, b;
    printf("\n1. Addition.\n");
    printf("2. Subtraction.\n");
    printf("3. Multiplication.\n");
    printf("4. Division.\n");
    printf("5. Exit.\n");

    while (1)
    {
    
        printf("\n\nEnter an Operator Number.: ");
        scanf("%d", &opNum);

        switch (opNum)
        {

            case 1 : printf("Enter two numbers.: ");
                    scanf("%f %f", &a, &b);
                    printf("\nAddition is %.2f", a+b);
                    break;

            case 2 : printf("Enter two numbers.: ");
                    scanf("%f %f", &a, &b);
                    printf("\nSubtraction is %.2f", a-b);
                    break;

            case 3 : printf("Enter two numbers.: ");
                    scanf("%f %f", &a, &b);
                    printf("\nMultiplication is %.2f", a*b);
                    break;

            case 4 : printf("Enter two numbers.: ");
                    scanf("%f %f", &a, &b);
                    printf("\nDivision is %.2f", a/b);
                    break;

            case 5 : exit(0);

            defaulft : printf("You've enter an invalid number.");


        }

    }


    printf("\n");
    return 0;
    
}
