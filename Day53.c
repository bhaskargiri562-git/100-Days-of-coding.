#include <stdio.h>

int main()
{
    int nums[100], n, i;
    int totalSum = 0, leftSum = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    for(i = 0; i < n; i++)
    {
        if(leftSum == totalSum - leftSum - nums[i])
        {
            printf("%d", i);
            return 0;
        }

        leftSum += nums[i];
    }

    printf("-1");

    return 0;
}