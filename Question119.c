#include <stdio.h>

int main()
{
    int arr[100], count[100] = {0};
    int n, i, repeated = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        count[arr[i]]++;

        if(count[arr[i]] == 2)
        {
            repeated = arr[i];
        }
    }

    printf("Repeated Element = %d", repeated);

    return 0;
}