#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{

    printf("\n----------------------------------------------------------------------------------------------\n");
    printf("\nWelcome to the simple Calculator !!\n");
    printf("\n----------------------------------------------------------------------------------------------\n");

    float first, second, result;
    int choices;

    do
    {

        printf("\nPlease Enter one of the choices:\n");
        printf("\n----------------------------------------------------------------------------------------------\n");
        printf("\n1. Summation\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. For Exit\n");
        printf("\n----------------------------------------------------------------------------------------------\n");
        scanf("%d", &choices);
        printf("----------------------------------------------------------------------------------------------\n");

        if (choices == 1 || choices == 2 || choices == 3 || choices == 4 || choices == 5 || choices == 6)
        {

            printf("\nEnter the first number:\n");
            scanf("%f", &first);

            printf("\nEnter the second number:\n");
            scanf("%f", &second);

            switch (choices)
            {
            case 1:
                result = first + second;
                printf("\nThe summation of first+second is %f\n", result);
                break;

            case 2:
                result = first - second;
                printf("\nThe subtraction of first-second is %f\n", result);
                break;

            case 3:
                result = first * second;
                printf("\nThe multiplication of first*second is %f\n", result);
                break;

            case 4:
                result = first / second;
                printf("\nThe division of first/second is %f\n", result);
                break;

            case 5:
                result = (int)first % (int)second;
                printf("\nThe muodulus of first % second is %f\n", result);
                break;

            case 6:
                result = pow(first, second);
                printf("\nThe power of first^second is %f\n", result);
                break;

            default:
                "Error invalid operator";
                break;
            }
        }

        else if (choices == 7)
        {
            break;
        }

        else
        {
            printf("\nplease enter the correct Entry\n");
        }

        printf("\n----------------------------------------------------------------------------------------------\n");
        
    } while (choices != 7);
}