#include <stdio.h>

int main()
{
    int n, i;
    int total, leftSum, rightSum;

    // Take input
    scanf("%d", &n);

    // Sum of numbers from 1 to n
    total = n * (n + 1) / 2;

    leftSum = 0;

    // Check every possible pivot
    for (i = 1; i <= n; i++)
    {
        leftSum = leftSum + i;

        // Sum from i to n
        rightSum = total - leftSum + i;

        if (leftSum == rightSum)
        {
            printf("%d", i);
            return 0;
        }
    }

    // If no pivot exists
    printf("-1");

    return 0;
}