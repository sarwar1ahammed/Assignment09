#include <stdio.h>
int main()
{
    // Convert even number into its upper nearest odd number.
    
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    switch (num % 2 == 0)
    {
        case 1 : printf("Upper nearest odd number is %d", (num + 1));
                    break;

        case 0 : printf("Upper nearest odd number is %d", num);
                    break;

    }

    printf("\n");
    return 0;
}
