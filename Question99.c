#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if(month == 4)
    {
        printf("New date: %02d-Apr-%04d", day, year);
    }
    else
    {
        printf("Invalid month");
    }

    return 0;
}