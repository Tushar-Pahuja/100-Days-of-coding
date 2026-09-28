#include <stdio.h>

int main()
{
    int a[10], n, i, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    for(i = n - 1; i >= 0 && a[i] > element; i--)
    {
        a[i + 1] = a[i];
    }

    a[i + 1] = element;
    n++;

    printf("Array after insertion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}