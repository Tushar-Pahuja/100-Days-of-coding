#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "r");

    if(fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    while(fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    if(count > 0)
    {
        avg = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f", avg);
    }
    else
    {
        printf("No numbers found");
    }

    fclose(fp);

    return 0;
}