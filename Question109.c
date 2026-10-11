#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, sum, maxSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if(k <= 0 || k > n)
    {
        printf("Invalid k");
        return 0;
    }

    maxSum = 0;
    for(i = 0; i < k; i++)
    {
        maxSum += arr[i];
    }

    for(i = 1; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum Sum = %d", maxSum);

    return 0;
}