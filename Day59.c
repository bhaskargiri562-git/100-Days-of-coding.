#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    int maxSum = 0;

    for(int i = 0; i <= n - k; i++)
    {
        int sum = 0;

        for(int j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }

        if(i == 0 || sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}