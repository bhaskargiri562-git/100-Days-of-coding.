#include <stdio.h>

int main()
{
    char s[100];
    int i, j, k, length, maxLength = 0;
    int repeated;

    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        length = 0;

        for(j = i; s[j] != '\0'; j++)
        {
            repeated = 0;

            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    repeated = 1;
                    break;
                }
            }

            if(repeated)
                break;

            length++;
        }

        if(length > maxLength)
            maxLength = length;
    }

    printf("%d", maxLength);

    return 0;
}