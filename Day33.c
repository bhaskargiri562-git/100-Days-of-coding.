Q65: Search in a sorted array using binary search.
Code:
  
#include <stdio.h>

int main()
{
    int a[100], n, key, i;
    int low, high, mid;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("Found at index %d", mid);
            return 0;
        }
        else if(key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("-1");

    return 0;
}
Q66: Insert an element in a sorted array at the appropriate position.
Code:
  
#include <stdio.h>

int main()
{
    int a[100], n, num, i, pos;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &num);

    pos = n;

    for(i = 0; i < n; i++)
    {
        if(num < a[i])
        {
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = num;
    n++;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
