#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    char *names[] = {"ADMIN", "USER", "GUEST"};
    int i;

    for(i = ADMIN; i <= GUEST; i++)
    {
        printf("%s = %d\n", names[i - 1], i);
    }

    return 0;
}