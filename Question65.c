#include <stdio.h>

int main()
{
    int a[5], i, key;
    int low = 0, high = 4, mid, found = 0;

    printf("Enter 5 sorted elements: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            found = 1;
            printf("Element found at position %d", mid + 1);
            break;
        }
        else if(key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}