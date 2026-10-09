#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int count[26] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    if(strlen(a) != strlen(b))
    {
        printf("Not Anagrams");
        return 0;
    }

    for(i = 0; a[i] != '\0'; i++)
    {
        count[a[i] - 'a']++;
        count[b[i] - 'a']--;
    }

    for(i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("Strings are Anagrams");
    }
    else
    {
        printf("Strings are Not Anagrams");
    }

    return 0;
}