q1:Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, temp, digits = 0, pow10 = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = temp % 10;  

    while (temp >= 10) {
        temp /= 10;
        digits++;
        pow10 *= 10;         
    }
    firstDigit = temp;  
  int middle = num % pow10;       
    middle /= 10;                  

    int swapped = lastDigit * pow10 + middle * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}


q2:Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is NOT a Perfect Number.\n", num);

    return 0;
}
