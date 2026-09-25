#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], word[100], longest[100];
    int i = 0, j = 0;

    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if(strlen(word) > strlen(longest))
                strcpy(longest, word);

            j = 0;
        }

        i++;
    }

    word[j] = '\0';

    if(strlen(word) > strlen(longest))
        strcpy(longest, word);

    printf("%s", longest);

    return 0;
}