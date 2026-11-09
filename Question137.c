#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    int choice;
    enum Role role;

    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("Enter your role: ");
    scanf("%d", &choice);

    role = choice;

    switch(role)
    {
        case ADMIN:
            printf("Welcome Admin! Full Access");
            break;

        case USER:
            printf("Welcome User! Limited Access");
            break;

        case GUEST:
            printf("Welcome Guest! View Only");
            break;

        default:
            printf("Invalid Role");
    }

    return 0;
}