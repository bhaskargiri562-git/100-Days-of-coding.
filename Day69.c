#include <stdio.h>

int main()
{
    int nums[100], count[100] = {0};
    int n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);

        if(count[nums[i]] == 1)
        {
            printf("%d", nums[i]);
            return 0;
        }

        count[nums[i]]++;
    }

    return 0;
}