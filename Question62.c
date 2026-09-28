#include <stdio.h>

int main()
{
    int a[5], i, temp;

    printf("Enter 5 elements: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5 / 2; i++)
    {
        temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }

    printf("Reversed array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}