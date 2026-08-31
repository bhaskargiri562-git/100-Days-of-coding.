Q37: LCM of Two Numbers
CODE:
#include <iostream>

int main() {
    int n1, n2, a, b, temp, gcd, lcm;

    std::cout << "Enter two integers: ";
    std::cin >> n1 >> n2;

    // Store original values to calculate LCM later
    a = n1;
    b = n2;

    // Standard Euclidean algorithm loop to find GCD
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a; 

    // Calculate LCM using the formula
    lcm = (n1 * n2) / gcd;

    std::cout << "LCM of " << n1 << " and " << n2 << " is: " << lcm << std::endl;

    return 0;
}

Q38: Sum of Digits
CODE:
#include <iostream>

int main() {
    int num, originalNum, remainder, sum = 0;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    originalNum = num;

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    // Loop to isolate and sum each digit
    while (num > 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    std::cout << "The sum of digits of " << originalNum << " is: " << sum << std::endl;

    return 0;
}
