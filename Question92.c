#include <stdio.h>

int main()
{
    char str[100];
    int i, count[26] = {0}, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;
        }
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' &&
           count[str[i] - 'a'] > 1)
        {
            printf("First repeating alphabet = %c", str[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("No repeating alphabet");
    }

    return 0;
}