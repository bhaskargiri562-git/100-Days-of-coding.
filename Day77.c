#include <stdio.h>

int main()
{
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if(input == NULL)
    {
        printf("Error opening input file!");
        return 1;
    }

    if(output == NULL)
    {
        printf("Error creating output file!");
        fclose(input);
        return 1;
    }

    while((ch = fgetc(input)) != EOF)
    {
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }

        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    return 0;
}