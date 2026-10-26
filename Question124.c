#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char file1[100], file2[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", file1);

    printf("Enter destination filename: ");
    scanf("%99s", file2);

    source = fopen(file1, "r");

    if(source == NULL)
    {
        printf("Source file not found");
        return 0;
    }

    destination = fopen(file2, "w");

    if(destination == NULL)
    {
        printf("Cannot open destination file");
        fclose(source);
        return 0;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File copied successfully");

    fclose(source);
    fclose(destination);

    return 0;
}