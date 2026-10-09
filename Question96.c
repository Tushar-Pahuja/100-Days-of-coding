#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i, j, start = 0, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for(i = 0; i <= len; i++)
    {
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n')
        {
            int end = i - 1;

            for(j = start; j < end; j++, end--)
            {
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;
            }

            start = i + 1;
        }
    }

    printf("Reversed words: %s", str);

    return 0;
}