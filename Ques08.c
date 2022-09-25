#include <stdio.h>
int main()
{
    /* 
        Convert a positive number into a negative number and negative
        number into a positive number using a switch statement.
    */
    int num;

        printf("\n\nEnter a number.: ");
        scanf("%d", &num);
        
        switch (num > 0)
        {
            case 1 : printf("Now, Negetive number is : %d", num-num*2);
                        break;
                        
            case 0 : printf("Now, Positive number is : %d", num+num*(-2));
                        break; 

            default : printf("Invalid Operator.:(");          
        }
    
    printf("\n");
    return 0;
}
