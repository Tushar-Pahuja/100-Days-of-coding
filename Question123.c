#include <stdio.h>

int main()
{
    FILE *fp;
    int ch, characters = 0, words = 0, lines = 0;
    int inWord = 0, last = '\n';

    fp = fopen("info.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == '\n')
        {
            lines++;
        }

        if(ch == ' ' || ch == '\n')
        {
            inWord = 0;
        }
        else if(inWord == 0)
        {
            words++;
            inWord = 1;
        }

        last = ch;
    }

    if(characters > 0 && last != '\n')
    {
        lines++;
    }

    printf("Total Characters = %d\n", characters);
    printf("Total Words = %d\n", words);
    printf("Total Lines = %d", lines);

    fclose(fp);

    return 0;
}