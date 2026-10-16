#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k, n, count, max = 0;

    printf("Enter a string: ");
    scanf("%99s", s);

    n = strlen(s);

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = i; j < n; j++)
        {
            for(k = i; k < j; k++)
            {
                if(s[j] == s[k])
                {
                    break;
                }
            }

            if(k < j)
            {
                break;
            }

            count++;

            if(count > max)
            {
                max = count;
            }
        }
    }

    printf("Longest Substring Length = %d", max);

    return 0;
}