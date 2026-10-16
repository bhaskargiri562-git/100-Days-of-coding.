#include <stdio.h>

int main()
{
    char s[100], t[100];
    int count[26] = {0};
    int i;

    scanf("%s", s);
    scanf("%s", t);

    for(i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }

    for(i = 0; t[i] != '\0'; i++)
    {
        count[t[i] - 'a']--;
    }

    for(i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}