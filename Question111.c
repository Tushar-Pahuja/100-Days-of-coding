#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, first;

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

    printf("First negative elements: ");

    for(i = 0; i <= n - k; i++)
    {
        first = 0;

        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                first = arr[j];
                break;
            }
        }

        printf("%d ", first);
    }

    return 0;
}