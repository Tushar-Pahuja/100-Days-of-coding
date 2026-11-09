#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int a, b, choice;
    enum Menu operation;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    operation = choice;

    switch(operation)
    {
        case ADD:
            printf("Sum = %d", a + b);
            break;

        case SUBTRACT:
            printf("Difference = %d", a - b);
            break;

        case MULTIPLY:
            printf("Product = %d", a * b);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}