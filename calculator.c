// calculator
// package: calculator
// sources:
#include <stdio.h>

int main()
{
    int num1, num2, choice;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    //printf("Enter your choice (1 for addition, 2 for subtraction, 3 for multiplication
    //, 4  division) ");
    printf("Enter your choice (1 for addition, 2 for subtraction, 3 for multiplication, 4 for divisitoion)\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;
    case 2:
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;
    case 3:
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
    case 4:
        if (num2 != 0)
        {
            printf("%d / %d = %f", num1, num2, (float)num1 / num2);
        }
        else
        {
            printf("Error! Division by zero is not allowed.");
        }
        break;
    default:
        printf("Invalid choice. Please choose a valid option.");
        break;
    }

    return 0;
}
