#include <stdio.h>

int main()
{
    int n, x, i, left, right, pivot = -1;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++)
    {
        left = 0;
        right = 0;

        for(i = 1; i <= x; i++)
        {
            left = left + i;
        }

        for(i = x; i <= n; i++)
        {
            right = right + i;
        }

        if(left == right)
        {
            pivot = x;
            break;
        }
    }

    printf("Pivot Integer = %d", pivot);

    return 0;
}