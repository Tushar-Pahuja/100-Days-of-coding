#include <stdio.h>

int main()
{
    int n, original, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if(original == sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }

    return 0;
}