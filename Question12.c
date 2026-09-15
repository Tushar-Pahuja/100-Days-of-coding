#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n >= 0)
    {
        if(n == 0)
        {
            printf("The number is Zero");
        }
        else
        {
            printf("The number is Positive");
        }
    }
    else
    {
        printf("The number is Negative");
    }

    return 0;
}