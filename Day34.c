Q67: Insert an element in an array at a given position.
Code:
  
#include <stdio.h>

int main()
{
    int a[100], n, pos, element, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &pos, &element);

    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = element;
    n++;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
Q68: Delete an element from an array.
Code:
  
#include <stdio.h>

int main()
{
    int a[100], n, pos, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &pos);

    for(i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
