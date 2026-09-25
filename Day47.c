#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int count[256] = {0};
    int i;

    scanf("%s", a);
    scanf("%s", b);

    for(i = 0; a[i] != '\0'; i++)
        count[a[i]]++;

    for(i = 0; b[i] != '\0'; i++)
        count[b[i]]--;

    for(i = 0; i < 256; i++)
    {
        if(count[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}