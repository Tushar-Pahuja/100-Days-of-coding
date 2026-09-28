#include <stdio.h>

int main()
{
    int n, digit, i;
    int count[10] = {0};
    int max = 0, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            maxDigit = i;
        }
    }

    printf("Most occurring digit = %d", maxDigit);
    printf("\nNumber of times = %d", max);

    return 0;
}