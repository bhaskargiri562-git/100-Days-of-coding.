Q63 — Merge Two Arrays
Code:

#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n, m, i;

    // Input size of first array
    scanf("%d", &n);

    // Input first array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input size of second array
    scanf("%d", &m);

    // Input second array
    for(i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    // Copy first array into third array
    for(i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    // Copy second array into third array
    for(i = 0; i < m; i++)
    {
        c[n + i] = b[i];
    }

    // Print merged array
    for(i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}




Q64 — Digit That Occurs Most Times
Code :


#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n, m, i;

    // Input size of first array
    scanf("%d", &n);

    // Input first array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input size of second array
    scanf("%d", &m);

    // Input second array
    for(i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    // Copy first array into third array
    for(i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    // Copy second array into third array
    for(i = 0; i < m; i++)
    {
        c[n + i] = b[i];
    }

    // Print merged array
    for(i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
