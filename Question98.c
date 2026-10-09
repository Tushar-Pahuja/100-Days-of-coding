#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ' && name[i + 1] != ' ')
        {
            last = i + 1;
        }
    }

    printf("Name: ");

    for(i = 0; i < last; i++)
    {
        if(i == 0 || (name[i - 1] == ' ' && name[i] != ' '))
        {
            printf("%c. ", name[i]);
        }
    }

    printf("%s", name + last);

    return 0;
}